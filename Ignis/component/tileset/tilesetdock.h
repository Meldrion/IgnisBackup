#ifndef TILESET_DOCK_H
#define TILESET_DOCK_H

#include <QDockWidget>
#include "component/tileset/tilesettabber.h"

class TilesetDock : public QDockWidget
{
public:
    TilesetDock(QWidget* parent = 0);
    TilesetTabber* getTilesetTabber();
private:
    TilesetTabber* m_tilesetTabber;
};

#endif // TILESET_DOCK_H
