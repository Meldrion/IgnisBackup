#ifndef PROJECT_H
#define PROJECT_H

#include <QString>
#include <QDir>
#include <QFile>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include "assets/assetmanager.h"

namespace Ignis
{
	class Project
	{
	public:
		
		static const QString PROJECT_XML;
		static const QString ASSET_FOLDER;
		static const QString AUDIO_FOLDER;
		static const QString TEXTURE_FOLDER;
		static const QString GAME_FOLDER;
		static const QString ANIMATION_FOLDER;
		static const QString CHARACTER_FOLDER;
		static const QString TERRAIN_FOLDER;
		static const QString TILESET_FOLDER;
		static const QString SCRIPTS_FOLDER;

		static int createProjectStructure(const QString& basePath, const QString& projectFolderName);
		static int finalizeProject(Project* project);
		Project(QString projectRoot);
		void setProjectTitle(QString title);
		void setProjectAuthor(QString author);
		void setProjectCompany(QString company);
		~Project();
		bool loadProjectXML();
		bool writeProjectXML();
	private:
		Ignis::AssetManager* assetManager;
		QString projectRoot;
		QString projectTitle;
		QString projectAuthor;
		QString projectCompany;
	};

}

#endif // PROJECT_H
