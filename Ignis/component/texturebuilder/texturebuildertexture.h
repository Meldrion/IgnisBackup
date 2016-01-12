#ifndef TEXTUREBUILDERTEXTURE_H
#define TEXTUREBUILDERTEXTURE_H

#include <QGraphicsItem>
#include <QGraphicsObject>
#include <QPainter>
#include <QRectF>
#include <QDebug>
#include "component/texturebuilder/texturebuildersubtexture.h"

class TextureBuilderTexture : public QGraphicsObject
{
	Q_OBJECT
public:
    TextureBuilderTexture(QGraphicsItem* parent = 0);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    void setDimension(int width,int height);
	int indexForSubTexture(TextureBuilderSubTexture* subTexture);
	TextureBuilderSubTexture* getSubTexture(int index);
private:
    int width;
    int height;
signals:

public slots:
	void selectedTextureChanged(int index);
};

#endif // TEXTUREBUILDERTEXTURE_H
