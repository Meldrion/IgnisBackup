#include "texturebuildersubtexture.h"

TextureBuilderSubTexture::TextureBuilderSubTexture(QGraphicsItem* parent) :QGraphicsObject(parent)
{
    this->width = 0;
    this->height = 0;
    this->texture = 0x0;
    this->setFlag(ItemIsMovable);
	this->selected = false;
}

TextureBuilderSubTexture::~TextureBuilderSubTexture()
{
    delete this->texture;
    this->texture = 0x0;
}

QRectF TextureBuilderSubTexture::boundingRect() const
{
    return QRectF(0,0,this->width,this->height);
}

void TextureBuilderSubTexture::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(QColor(0,0,0,255)));
    if (!this->texture)
        painter->fillRect(this->boundingRect(),QBrush(QColor(255,255,255,255)));
    else
        painter->drawPixmap(0,0,this->width,this->height,*this->texture);

	if (selected)
	{
		painter->fillRect(this->boundingRect(), QBrush(QColor(255, 0, 0, 96)));
	}

    painter->drawRect(this->boundingRect());
}

void TextureBuilderSubTexture::setTexturePath(QString path)
{

	this->texturePath = path;

    if (this->texture)
    {
        delete this->texture;
        this->texture = 0x0;
    }

    this->width = 0;
    this->height = 0;

    this->texture = new QPixmap();

    if (!this->texture->load(path))
    {
        delete this->texture;
        this->texture = 0x0;
    }
        else
    {
        this->width = this->texture->width();
        this->height = this->texture->height();
    }
}

void TextureBuilderSubTexture::setTextureName(QString name)
{
    this->name = name;
}

QString TextureBuilderSubTexture::getTextureName()
{
    return this->name;
}

QString TextureBuilderSubTexture::getTexturePath()
{
	return this->texturePath;
}

void TextureBuilderSubTexture::setSelection(bool flag)
{
	this->selected = flag;
}

bool TextureBuilderSubTexture::isSelected()
{
	return this->selected;
}

void TextureBuilderSubTexture::mousePressEvent(QGraphicsSceneMouseEvent* mouseEvent)
{
	emit(selectedItemChanged(this));
}

void TextureBuilderSubTexture::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* mouseEvent)
{
	emit(itemReceivedDoubleClick(this));
}
