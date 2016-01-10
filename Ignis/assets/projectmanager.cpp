#include "projectmanager.h"

using namespace Ignis;

ProjectManager* ProjectManager::instance = 0x0;
const QString ProjectManager::DEFAULT_WORKSPACE_NAME = "/ignis";
const QString ProjectManager::CONFIG_FOLDER_NAME = "/.ignis";
const QString ProjectManager::WORKSPACE_CONFIG_FILE_NAME = "/workspace.xml";
const QString ProjectManager::EDITOR_VIEW_CONFIG_FILE_NAME = "/editor.xml";

ProjectManager* ProjectManager::getInstance()
{
    if (!ProjectManager::instance)
    {
        ProjectManager::instance = new ProjectManager();
    }

    return ProjectManager::instance;
}

void ProjectManager::close()
{
    delete ProjectManager::instance;
    ProjectManager::instance = 0x0;
}

void ProjectManager::init()
{
    writeConfigFiles();
}

void ProjectManager::setWorkspaceFolder(const QString& folder)
{
    if (this->workspaceFolderPath != folder)
    {
        this->workspaceFolderPath = QString(folder);
        this->writeWorkspaceConfigXML();
    }
}

QString ProjectManager::getWorkspacePath()
{
    return this->workspaceFolderPath;
}

const QVector<QString> ProjectManager::listProjectsInWorkspace()
{
    QVector<QString> projects;
    QDir workspace(this->workspaceFolderPath);
    QStringList subFiles = workspace.entryList();
    for (QStringList::iterator it = subFiles.begin();it != subFiles.end();++it)
    {
        QString current = *it;
        if (QDir(this->workspaceFolderPath + "/" + current).exists())
        {
            // Now this is the place where we need to check if the current dir is
            // a valid project
            projects.append(current);
        }
    }

    return projects;
}

ProjectManager::ProjectManager()
{
}

ProjectManager::~ProjectManager()
{
    delete ProjectManager::instance;
}

void ProjectManager::writeConfigFiles()
{
    QString home = QDir::homePath();
    QString configFolder = home + ProjectManager::CONFIG_FOLDER_NAME;
    QString configFile = configFolder + ProjectManager::WORKSPACE_CONFIG_FILE_NAME;
    QString ignisBaseWorkspace = home + ProjectManager::DEFAULT_WORKSPACE_NAME;

    // Create a hidden Folder that holds all the config files
    QDir configFolderDir(configFolder);

    if (!configFolderDir.exists())
    {
        if (!configFolderDir.mkdir(configFolder))
        {
            qDebug() << "Error creating config folder " << configFolder;
        }
    }

    this->workspaceFolderPath = ignisBaseWorkspace;
    this->configFolderPath = configFolder;
    if (!this->writeWorkspaceConfigXML(false))
    {
        this->readWorkspaceConfigXML();
    }

    // Create the default workspace
    QDir ignisWorkspaceDir(ignisBaseWorkspace);
    if (!ignisWorkspaceDir.exists())
    {
        if (!ignisWorkspaceDir.mkdir(ignisBaseWorkspace))
        {
            qDebug() << "Error creating workspace folder " << ignisBaseWorkspace;
        }
    }
}

bool ProjectManager::writeWorkspaceConfigXML(bool forceOverride)
{
    QFile file(configFolderPath + ProjectManager::WORKSPACE_CONFIG_FILE_NAME);

    if ( (!file.exists() || forceOverride) && file.open(QFile::WriteOnly))
    {
        QXmlStreamWriter writer(&file);
        writer.setAutoFormatting(true);
        writer.writeStartDocument();
        writer.writeStartElement("ignis");
        writer.writeStartElement("workspace");
        writer.writeCharacters(this->workspaceFolderPath);
        writer.writeEndElement();
        writer.writeEndElement();
        writer.writeEndDocument();
        file.close();
        return true;
    }
        else
    {
        if (forceOverride)
        {
            qDebug() << "Could not open file for writing: "
                     << configFolderPath + ProjectManager::WORKSPACE_CONFIG_FILE_NAME;
        }

        return false;
    }
}

void ProjectManager::readWorkspaceConfigXML()
{
    QFile file(configFolderPath + ProjectManager::WORKSPACE_CONFIG_FILE_NAME);
    if (file.open(QFile::ReadOnly))
    {
        QXmlStreamReader reader(&file);
        while (!reader.atEnd() && !reader.hasError())
        {
            QXmlStreamReader::TokenType token = reader.readNext();
            if (token == QXmlStreamReader::StartElement)
            {
                if (reader.name() == "workspace")
                {
                    QString workspace = reader.readElementText();
                    this->workspaceFolderPath = workspace;
                }
            }
        }

        file.close();
    }
        else
    {
        qDebug() << "Could not open file for reading: "
                 << configFolderPath + ProjectManager::WORKSPACE_CONFIG_FILE_NAME;
    }
}
