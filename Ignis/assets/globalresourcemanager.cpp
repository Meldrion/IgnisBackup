#include "globalresourcemanager.h"

using namespace Ignis;

const QString GlobalResourceManager::ANIMATION_TYPE = "animation";
const QString GlobalResourceManager::CHARACTER_TYPE = "character";
const QString GlobalResourceManager::TILESET_TYPE = "tileset";
const QString GlobalResourceManager::TERRAIN_TYPE = "terrain";
const QString GlobalResourceManager::MUSIC_TYPE = "music";
const QString GlobalResourceManager::SOUND_TYPE = "sound";

GlobalResourceManager::GlobalResourceManager()
{
    QVector<QString>* animation = new QVector<QString>;
    QVector<QString>* character = new QVector<QString>;
    QVector<QString>* tileset = new QVector<QString>;
    QVector<QString>* terrain = new QVector<QString>;
    QVector<QString>* music = new QVector<QString>;
    QVector<QString>* sound = new QVector<QString>;

    this->registeredRecources.insert(ANIMATION_TYPE,animation);
    this->registeredRecources.insert(CHARACTER_TYPE,character);
    this->registeredRecources.insert(TILESET_TYPE,tileset);
    this->registeredRecources.insert(TERRAIN_TYPE,terrain);
    this->registeredRecources.insert(MUSIC_TYPE,music);
    this->registeredRecources.insert(SOUND_TYPE,sound);
}

GlobalResourceManager::~GlobalResourceManager()
{
    for (QMap<QString,QVector<QString>* >::iterator it = this->registeredRecources.begin();
         it != this->registeredRecources.end();++it)
    {
        delete *it;
    }
}

bool GlobalResourceManager::isResourceNameAllreadyTaken(QString name,QString type)
{
    return this->registeredRecources.contains(type) &&
            this->registeredRecources.value(type)->contains(name);
}

bool GlobalResourceManager::registerAsset(QString name,QString type)
{
    if (!isResourceNameAllreadyTaken(name,type))
    {

        //this->registeredRecources.value(type).append(name);
        return true;
    }
        else
    {
        return false;
    }
}
