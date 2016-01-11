#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "assets/scene/abstractscene.h"

namespace Ignis
{
	class GameMap : public AbstractScene
	{
	public:
		GameMap();
		~GameMap();
		void setUnitSize(int unit_width,int unit_height);

	private:
		int unit_width;
		int unit_height;
	};
}

#endif // GAMEMAP_H
