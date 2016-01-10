#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "component/scenecanvas.h"
#include <QDesktopWidget>
#include "component/scenetree/scenetreedock.h"
#include "component/tileset/tilesetdock.h"
#include "assets/projectmanager.h"
#include "assets/project.h"
#include "gui/newprojectdialog.h"
#include "gui/textureatlasbuilder.h"
#include "gui/openprojectdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void newProjectTriggered();
	void loadProjectTriggered();
	void textureAtlasBuilderTriggered();

private:
    Ui::MainWindow *ui;
    SceneCanvas* sceneCanvas;
    TilesetDock* tilesetDock;
    SceneTreeDock* sceneTreeDock;

};

#endif // MAINWINDOW_H
