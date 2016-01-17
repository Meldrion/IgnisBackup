#ifndef TILESETIMAGE_H
#define TILESETIMAGE_H

#include <QImage>
#include "SFML/Graphics.hpp"

class TilesetImage
{
public:
	TilesetImage(QImage* sourceImage,QString tilesetImageName);
	TilesetImage(sf::Texture* sourceImage, QString tilesetImageName);
	~TilesetImage();
private:
	
};

#endif // TILESETIMAGE_H
