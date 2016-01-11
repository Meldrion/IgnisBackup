#include "texturebuildertexture.h"

TextureBuilderTexture::TextureBuilderTexture(QGraphicsItem* parent) :QGraphicsObject(parent)
{
	this->setFlag(QGraphicsObject::ItemClipsChildrenToShape, true);
}

QRectF TextureBuilderTexture::boundingRect() const
{
    return QRectF(0,0,this->width,this->height);
}

void TextureBuilderTexture::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(QColor(0,0,0,255)));
    painter->fillRect(boundingRect(),QBrush(QColor(255,255,255,255)));
    painter->drawRect(boundingRect());
}

void TextureBuilderTexture::setDimension(int width, int height)
{
    this->width = width;
    this->height = height;
}

void TextureBuilderTexture::selectedTextureChanged(int index)
{
	QList<QGraphicsItem*> items = this->childItems();

	for (int i = 0; i < items.size(); i++)
	{
		TextureBuilderSubTexture* subTexture = dynamic_cast<TextureBuilderSubTexture*>(items.at(i));
		if (subTexture)
		{
			subTexture->setSelection(i == index);
		}
	}

	this->update();

}