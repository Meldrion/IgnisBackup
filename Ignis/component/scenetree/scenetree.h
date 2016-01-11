#ifndef SCENETREEWIDGET_H
#define SCENETREEWIDGET_H

#include <QTreeWidget>
#include <QPoint>
#include <QMenu>
#include "gui/newscenedialog.h"

class SceneTree : public QTreeWidget
{
	Q_OBJECT
public:
    SceneTree(QWidget* parent = 0);
    QSize sizeHint() const;
signals:

private slots:
	void showContextMenu(const QPoint &pos);
	void newScene();
	void editScene();
	void copyScene();
	void cutScene();
	void pasteScene();
	void deleteScene();
};

#endif // SCENETREEWIDGET_H
