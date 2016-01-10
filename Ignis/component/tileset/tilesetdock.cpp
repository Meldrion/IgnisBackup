#include "tilesetdock.h"

TilesetDock::TilesetDock(QWidget* parent): QDockWidget(parent)
{
    this->setWindowTitle("Tileset Dock");
    this->m_tilesetTabber = new TilesetTabber(this);
    this->setWidget(this->m_tilesetTabber);
}

TilesetTabber* TilesetDock::getTilesetTabber()
{
    return this->m_tilesetTabber;
}
