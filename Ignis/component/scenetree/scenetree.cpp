#include "scenetree.h"

SceneTree::SceneTree(QWidget* parent) : QTreeWidget(parent)
{

}

QSize SceneTree::sizeHint() const
{
    return QSize(300,150);
}

