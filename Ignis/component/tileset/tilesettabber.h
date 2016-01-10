#ifndef TILESET_TABBER_H
#define TILESET_TABBER_H

#include <QTabWidget>
#include <QVector>
//#include "interface/active_scene_listener.h"
//#include "scene/gamelevelscene.h"
#include "component/tileset/tilesetcanvastab.h"

class TilesetTabber : public QTabWidget
{
public:
    TilesetTabber(QWidget* parent = 0);
    //void activeSceneChanged(Abstract_Scene *scene);
    QSize sizeHint() const;
private:
    void deleteAllocatedGUIComponents();
    QVector<TilesetCanvasTab*> m_tilesetTabs;
signals:

public slots:
};

#endif // TILESET_TABBER_H
