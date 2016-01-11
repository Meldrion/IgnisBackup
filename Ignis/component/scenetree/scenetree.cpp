#include "scenetree.h"

SceneTree::SceneTree(QWidget* parent) : QTreeWidget(parent)
{
	this->setContextMenuPolicy(Qt::CustomContextMenu);
	this->connect(this, SIGNAL(customContextMenuRequested(const QPoint &)),
		this, SLOT(showContextMenu(const QPoint &)));
	this->setAlternatingRowColors(true);
}

QSize SceneTree::sizeHint() const
{
    return QSize(300,150);
}

void SceneTree::showContextMenu(const QPoint &pos)
{
	QMenu contextMenu(tr("Map Tree Menu"), this);

	// New Map Action
	QAction newMapAction("New Map", this);
	connect(&newMapAction, SIGNAL(triggered()), this, SLOT(newScene()));
	contextMenu.addAction(&newMapAction);

	// Edit Map Action
	QAction editMapAction("Edit Map", this);
	connect(&editMapAction, SIGNAL(triggered()), this, SLOT(editScene()));
	contextMenu.addAction(&editMapAction);

	// Seperator
	contextMenu.addSeparator();

	// Copy Map Action
	QAction copyMapAction("Copy Map", this);
	connect(&copyMapAction, SIGNAL(triggered()), this, SLOT(copyScene()));
	contextMenu.addAction(&copyMapAction);

	// Cut Map Action
	QAction cutMapAction("Cut Map", this);
	connect(&cutMapAction, SIGNAL(triggered()), this, SLOT(cutScene()));
	contextMenu.addAction(&cutMapAction);

	// Paste Map Action
	QAction pasteMapAction("Paste Map", this);
	connect(&pasteMapAction, SIGNAL(triggered()), this, SLOT(pasteScene()));
	contextMenu.addAction(&pasteMapAction);

	// Seperator
	contextMenu.addSeparator();

	// Delete Map Action
	QAction deleteMapAction("Delete Map", this);
	connect(&deleteMapAction, SIGNAL(triggered()), this, SLOT(deleteScene()));
	contextMenu.addAction(&deleteMapAction);

	// Show the context menu
	contextMenu.exec(mapToGlobal(pos));
}

void SceneTree::newScene()
{
	NewSceneDialog dialog(this);
	if (dialog.exec() == QDialog::Accepted)
	{

	}
}

void SceneTree::editScene()
{
	NewSceneDialog dialog(this);
	if (dialog.exec() == QDialog::Accepted)
	{

	}
}

void SceneTree::copyScene()
{
}

void SceneTree::cutScene()
{
}

void SceneTree::pasteScene()
{
}

void SceneTree::deleteScene()
{
}

