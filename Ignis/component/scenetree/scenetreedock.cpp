#include "scenetreedock.h"

SceneTreeDock::SceneTreeDock(QWidget* parent) : QDockWidget(parent)
{
    setWindowTitle("Scene Tree Dock");
    this->m_sceneTree = new SceneTree(this);
    this->setWidget(this->m_sceneTree);
}
