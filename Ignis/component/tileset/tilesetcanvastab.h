#ifndef TILESETWIDGET_H
#define TILESETWIDGET_H

#include <QWidget>
#include <QScrollArea>
#include <QVBoxLayout>
#include "component/tileset/tilesetcanvas.h"

class TilesetCanvasTab:public QScrollArea
{
public:
    TilesetCanvasTab(Tileset* tileset,QWidget* parent = 0);
    ~TilesetCanvasTab();
private:
    QVBoxLayout* m_layout;
    TilesetCanvas* m_tilesetCanvas;
    QSize sizeHint() const;
signals:

public slots:
};

#endif // TILESETWIDGET_H
