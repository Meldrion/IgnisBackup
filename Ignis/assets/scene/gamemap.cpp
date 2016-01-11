#include "gamemap.h"

using namespace Ignis;

GameMap::GameMap()
	: AbstractScene()
{

}

GameMap::~GameMap()
{

}


void GameMap::setUnitSize(int unit_width, int unit_height)
{
	this->unit_width = unit_width;
	this->unit_height = unit_height;
}