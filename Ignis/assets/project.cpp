#include "project.h"

using namespace Ignis;

const QString Project::ASSET_FOLDER = "/asset";
const QString Project::AUDIO_FOLDER = Project::ASSET_FOLDER + "/audio";
const QString Project::TEXTURE_FOLDER = Project::ASSET_FOLDER + "/texture";
const QString Project::GAME_FOLDER = Project::ASSET_FOLDER + "/game";
const QString Project::ANIMATION_FOLDER = Project::GAME_FOLDER + "/animation";
const QString Project::CHARACTER_FOLDER = Project::GAME_FOLDER + "/character";
const QString Project::TERRAIN_FOLDER = Project::GAME_FOLDER + "/terrain";
const QString Project::TILESET_FOLDER = Project::GAME_FOLDER + "/tileset";
const QString Project::SCRIPTS_FOLDER = Project::GAME_FOLDER + "/script";

int Project::createProjectStructure(const QString& basePath, const QString& projectFolderName)
{
	QDir dir;

	if (!dir.exists(basePath))
	{
		// We need to create the base Path first
		if (!dir.mkdir(basePath))
		{
			// Write a Message that says that the base path could not be created
			return -1; // Replace me with real message code
		}
	}

	QString projectPath = basePath + "/" + projectFolderName;
	
	
	if (!dir.exists(projectPath))
	{
		if (dir.mkdir(projectPath))
		{
			// The base dir was created
			// Now we need to create the subdirs
			bool ok = true;
			ok &= dir.mkdir(projectPath + Project::ASSET_FOLDER);
			ok &= dir.mkdir(projectPath + Project::AUDIO_FOLDER);
			ok &= dir.mkdir(projectPath + Project::TEXTURE_FOLDER);
			ok &= dir.mkdir(projectPath + Project::GAME_FOLDER);
			ok &= dir.mkdir(projectPath + Project::ANIMATION_FOLDER);
			ok &= dir.mkdir(projectPath + Project::CHARACTER_FOLDER);
			ok &= dir.mkdir(projectPath + Project::TERRAIN_FOLDER);
			ok &= dir.mkdir(projectPath + Project::TILESET_FOLDER);
			ok &= dir.mkdir(projectPath + Project::SCRIPTS_FOLDER);

			if (ok)
			{
				return 0;
			}
			else
			{
				// Write a Message that says that something went terribly wrong
				return -1; // Replace me with real message code
			}
		}
		else
		{
			// Write Message that the dir could not be created
			return -1; // Replace me with real message code
		}
	}
	else
	{
		// Write Message that dir allready exits
		return -1; // Replace me with real message code
	}
}

Project::Project(QString projectRoot)
{
    this->projectRoot = projectRoot;
    this->assetManager = new Ignis::AssetManager(projectRoot);
}

Project::~Project()
{
    delete this->assetManager;
}

void Project::setProjectTitle(QString title)
{
    this->projectTitle = title;
}

void Project::setProjectAuthor(QString author)
{
    this->projectAuthor = author;
}

void Project::setProjectCompany(QString company)
{
    this->projectCompany = company;
}

bool Project::loadProjectXML()
{
	return true;
}

bool Project::writeProjectXML()
{
	return true;
}