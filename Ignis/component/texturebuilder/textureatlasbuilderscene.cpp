#include "textureatlasbuilderscene.h"

TextureAtlasBuilderScene::TextureAtlasBuilderScene(QWidget* parent): QGraphicsScene(parent)
{
    this->baseTexture = 0x0;
    this->setTextureDimension(256,256);
    this->setBackgroundBrush(QBrush(QColor(128,128,128,255)));
}

TextureBuilderTexture* TextureAtlasBuilderScene::getRoot()
{
	return this->baseTexture;
}

void TextureAtlasBuilderScene::setTextureDimension(int width, int height)
{
    this->textureWidth = width;
    this->textureHeight = height;
    if (!this->baseTexture)
    {
        this->baseTexture = new TextureBuilderTexture();
        this->baseTexture->setDimension(width,height);
        this->addItem(this->baseTexture);
    }
        else
    {
        this->baseTexture->setDimension(width,height);
    }

    this->setSceneRect(0,0,width,height);
}
