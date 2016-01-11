#ifndef TEXTUREATLASBUILDERCANVAS_H
#define TEXTUREATLASBUILDERCANVAS_H

#include <QDebug>
#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsRectItem>
#include "component/texturebuilder/texturebuildertexture.h"

class TextureAtlasBuilderScene: public QGraphicsScene
{
	Q_OBJECT
public:
    TextureAtlasBuilderScene(QWidget* parent = 0);
    void setTextureDimension(int width,int height);
	TextureBuilderTexture* getRoot();
private:
    int textureWidth;
    int textureHeight;
    TextureBuilderTexture* baseTexture;
signals:

};

#endif // TEXTUREATLASBUILDERCANVAS_H
