#include "tilesetcanvastab.h"

TilesetCanvasTab::TilesetCanvasTab(Tileset* tileset,QWidget* parent):QScrollArea(parent)
{
    // Needed for the content to able to resize inside the scroll area
    this->setWidgetResizable(true);

    // Set the Layout
    m_layout = new QVBoxLayout(this);
    m_layout->setSpacing(0);
    m_layout->setContentsMargins(0, 0, 0, 0);

    //Set a Layout for the ScrollArea
    this->setLayout(m_layout);

    // Create the TilesetCanvas
    m_tilesetCanvas = new TilesetCanvas(this);

    // Link the Tileset to the Canvas
    m_tilesetCanvas->setTileset(tileset);

    // Add the Canvas to the ScrollArea
    this->setWidget(m_tilesetCanvas);
}

TilesetCanvasTab::~TilesetCanvasTab()
{
    delete m_layout;
    delete m_tilesetCanvas;
}

QSize TilesetCanvasTab::sizeHint() const
{
    return QSize(300,0);
}

