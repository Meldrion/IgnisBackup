#ifndef ABSTRACTSCENE_H
#define ABSTRACTSCENE_H

#include <QString>

namespace Ignis
{
	class AbstractScene
	{
	public:
		AbstractScene();
		~AbstractScene();
	private: 
		QString name;
	};
}

#endif // ABSTRACTSCENE_H