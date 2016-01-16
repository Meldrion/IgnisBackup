#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H

#include <QDebug>
#include <QString>
#include <QDir>
#include <QFile>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include "assets/project.h"

namespace Ignis
{
    class ProjectManager
    {
    public:
        static ProjectManager* getInstance();
        void close();
        void init();
        void setWorkspaceFolder(const QString& folder);
        QString getWorkspacePath();
        const QVector<QString> listProjectsInWorkspace();
    private:
        ProjectManager();
        ~ProjectManager();
        static ProjectManager* instance;
        void writeConfigFiles();
        QString workspaceFolderPath;
        QString configFolderPath;
        bool writeWorkspaceConfigXML(bool forceOverride = true);
        void readWorkspaceConfigXML();

        static const QString CONFIG_FOLDER_NAME;
        static const QString WORKSPACE_CONFIG_FILE_NAME;
        static const QString EDITOR_VIEW_CONFIG_FILE_NAME;
        static const QString DEFAULT_WORKSPACE_NAME;
    };
}

#endif // PROJECTMANAGER_H
