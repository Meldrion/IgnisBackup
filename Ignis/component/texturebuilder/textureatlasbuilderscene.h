#ifndef TEXTUREATLASBUILDERCANVAS_H
#define TEXTUREATLASBUILDERCANVAS_H

#include <QDebug>
#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsRectItem>
#include "component/texturebuilder/texturebuildertexture.h"

class TextureAtlasBuilderScene: public QGraphicsScene
{
public:
    TextureAtlasBuilderScene(QWidget* parent = 0);
    void setTextureDimension(int width,int height);
private:
    int textureWidth;
    int textureHeight;
    TextureBuilderTexture* baseTexture;
signals:

public slots:
};

#endif // TEXTUREATLASBUILDERCANVAS_H
