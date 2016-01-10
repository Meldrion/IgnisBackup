#ifndef TEXTUREBUILDERTEXTURE_H
#define TEXTUREBUILDERTEXTURE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QDebug>

class TextureBuilderTexture : public QGraphicsItem
{
public:
    TextureBuilderTexture(QGraphicsItem* parent = 0);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    void setDimension(int width,int height);
private:
    int width;
    int height;
signals:

public slots:
};

#endif // TEXTUREBUILDERTEXTURE_H
