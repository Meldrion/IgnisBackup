#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <QDebug>
#include <QString>
#include <QImage>
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <QMap>

namespace  Ignis
{
    class AssetManager
    {

    public:
        AssetManager(QString basePath);
        ~AssetManager();

        QImage* getAsQImage(QString assetPath,bool isInteral = false);
        void removeQImage(QString assetPath);
        sf::Texture* getAsTexture(QString assetPath,bool isInteral = false);
        void removeTexture(QString assetPath);
        sf::Music* getMusic(QString assetPath,bool isInteral = false);
        void removeMusic(QString assetPath);
        sf::Sound* getSound(QString assetPath,bool isInteral = false);
        void removeSound(QString assetPath);
        //sf::Shader* getShader(QString shader);
        //void removeShader(QString assetPath);
    private:
        QString basePath;

        QMap<QString,QImage*> qtImageCollection;
        QMap<QString,sf::Texture*> textureCollection;
        QMap<QString,sf::Music*> musicCollection;
        QMap<QString,sf::Sound*> soundCollection;
        //QMap<QString,sf::Shader*> shaderCollection;

    signals:

    public slots:
    };
}

#endif // ASSETMANAGER_H
