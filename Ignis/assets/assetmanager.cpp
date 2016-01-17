#include "assetmanager.h"

using namespace Ignis;

AssetManager::AssetManager(QString basePath)
{
    this->basePath = basePath;
}

AssetManager::~AssetManager()
{
    // Delete all QImages
    for (QMap<QString,QImage*>::iterator it = this->qtImageCollection.begin();it != this->qtImageCollection.end();++it)
    {
        delete *it;
    }

    // Delete all Textures
    for (QMap<QString,sf::Texture*>::iterator it = this->textureCollection.begin();it != this->textureCollection.end();++it)
    {
        delete *it;
    }

    // Delete all Musics
    for (QMap<QString,sf::Music*>::iterator it = this->musicCollection.begin();it != this->musicCollection.end();++it)
    {
        delete *it;
    }

    // Delete all Sounds
    for (QMap<QString,sf::Sound*>::iterator it = this->soundCollection.begin();it != this->soundCollection.end();++it)
    {
        delete *it;
    }

}

QImage* AssetManager::getAsQImage(QString assetPath,bool isInteral)
{
    QMap<QString,QImage*>::iterator it = this->qtImageCollection.find(assetPath);
    if (it != this->qtImageCollection.end())
    {
        return *it;
    }
        else
    {
        QImage* newQImage = new QImage();
        if (!newQImage->load(basePath + assetPath))
        {
            // Could not find Image
            qDebug() << "Cannot not find image " << (basePath + assetPath);
        }
        this->qtImageCollection.insert(assetPath,newQImage);
        return newQImage;
    }
}

void AssetManager::removeQImage(QString assetPath)
{
    QMap<QString,QImage*>::iterator it = this->qtImageCollection.find(assetPath);
    if (it != this->qtImageCollection.end())
    {
        QImage* qImage = *it;
        delete qImage;
        this->qtImageCollection.remove(assetPath);
    }
}

sf::Texture* AssetManager::getAsTexture(QString assetPath,bool isInteral)
{
    QMap<QString,sf::Texture*>::iterator it = this->textureCollection.find(assetPath);
    if (it != this->textureCollection.end())
    {
        return *it;
    }
        else
    {
        sf::Texture* texture = new sf::Texture();
        std::string path = this->basePath.toStdString() + assetPath.toStdString();
        if (!texture->loadFromFile(path))
        {
            qDebug() << "Error loading resource !";
			delete texture;
			texture = 0x0;
        }

		else
		{
			texture->setSmooth(true);
			texture->setRepeated(false);

			this->textureCollection.insert(assetPath, texture);
		}

        return texture;
    }
}

void AssetManager::removeTexture(QString assetPath)
{
    QMap<QString,sf::Texture*>::iterator it = this->textureCollection.find(assetPath);
    if (it != this->textureCollection.end())
    {
        sf::Texture* texture = *it;
        delete texture;
        this->textureCollection.remove(assetPath);
    }
}

sf::Music* AssetManager::getMusic(QString assetPath,bool isInteral)
{
    QMap<QString,sf::Music*>::iterator it = this->musicCollection.find(assetPath);
    if (it != this->musicCollection.end())
    {
        return *it;
    }
        else
    {
        sf::Music* music = new sf::Music();
        std::string path = this->basePath.toStdString() + assetPath.toStdString();
        if (!music->openFromFile(path))
        {
            qDebug() << "Error loading resource !";
        }

        this->musicCollection.insert(assetPath,music);
        return music;
    }
}

void AssetManager::removeMusic(QString assetPath)
{
    QMap<QString,sf::Music*>::iterator it = this->musicCollection.find(assetPath);
    if (it != this->musicCollection.end())
    {
        sf::Music* music = *it;
        delete music;
        this->musicCollection.remove(assetPath);
    }
}

sf::Sound* AssetManager::getSound(QString assetPath,bool isInteral)
{
    return 0x0;
}

void AssetManager::removeSound(QString assetPath)
{
    QMap<QString,sf::Sound*>::iterator it = this->soundCollection.find(assetPath);
    if (it != this->soundCollection.end())
    {
        sf::Sound* sound = *it;
        delete sound;
        this->soundCollection.remove(assetPath);
    }
}

void AssetManager::registerTilesetImage(QString tilesetImageName, QString textureName)
{
	//if (this->)
}

void AssetManager::unRegisterTilesetImage(QString tilesetImageName)
{

}