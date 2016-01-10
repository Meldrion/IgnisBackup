#ifndef GLOBALRESOURCEMANAGER_H
#define GLOBALRESOURCEMANAGER_H

#include <QVector>
#include <QMap>
#include <QString>


namespace Ignis
{
    class GlobalResourceManager
    {
    public:
        static const QString ANIMATION_TYPE;
        static const QString CHARACTER_TYPE;
        static const QString TILESET_TYPE;
        static const QString TERRAIN_TYPE;
        static const QString MUSIC_TYPE;
        static const QString SOUND_TYPE;

        GlobalResourceManager();
        ~GlobalResourceManager();
        bool isResourceNameAllreadyTaken(QString name,QString type);
        bool registerAsset(QString name,QString type);
    private:
        QMap<QString,QVector<QString>* > registeredRecources;
    };
}

#endif // GLOBALRESOURCEMANAGER_H
