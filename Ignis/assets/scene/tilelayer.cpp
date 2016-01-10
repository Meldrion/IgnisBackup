#include "tilelayer.h"

using namespace Ignis;

TileLayer::TileLayer(int unit_width, int unit_height, int unit_size, QGraphicsItem *parent)
    : AbstractSceneLayer(unit_width,unit_height,unit_size,parent)
{
    m_startPosition = QPointF(0,0);
    m_zoom = 1.0;
    init();
}

void TileLayer::init()
{
    m_elements.clear();
    for (int i=0;i<m_unit_width;i++)
    {
        QVector<TileData*> innerVector;
        for (int j=0;j<m_unit_height;j++)
        {
            innerVector.append(0x0);
        }
        m_elements.append(innerVector);
    }
}

void TileLayer::render()
{

}

void TileLayer::addTileAt(int x, int y,int tilesetIndex,int tilesetX,int tilesetY)
{
    delete m_elements[x][y];
    /*
    TileData* data = new TileData(tilesetX,tilesetY,tilesetIndex,
                                  m_linked_tilesets.at(tilesetIndex)->getTileAt(tilesetX,tilesetY));
    m_elements[x][y] = data;*/
}

void TileLayer::deleteTileAt(int x, int y)
{
    delete m_elements[x][y];
    m_elements[x][y] = 0x0;
}

void TileLayer::addTileset(Tileset *tileset)
{
    this->m_linked_tilesets.append(tileset);
}
