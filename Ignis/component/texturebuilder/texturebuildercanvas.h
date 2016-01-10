#ifndef TEXTUREBUILDERCANVAS_H
#define TEXTUREBUILDERCANVAS_H

#include <QGraphicsView>
#include <QWheelEvent>
#include <QApplication>
#include <QtMath>
#include <QScrollBar>
#include <QDebug>

class TextureBuilderCanvas: public QGraphicsView
{
public:
    TextureBuilderCanvas(QWidget* parent = 0);
    void wheelEvent(QWheelEvent *event);
private:
    int zoomValue;
    void setupMatrix();
signals:

public slots:
};

#endif // TEXTUREBUILDERCANVAS_H
