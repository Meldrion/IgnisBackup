#ifndef SCENETREEDOCK_H
#define SCENETREEDOCK_H

#include <QDockWidget>
#include "component/scenetree/scenetree.h"

class SceneTreeDock : public QDockWidget
{
public:
    SceneTreeDock(QWidget* parent = 0);
private:
    SceneTree* m_sceneTree;

public slots:
};

#endif // SCENETREEDOCK_H
