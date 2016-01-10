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
    void on_actionNew_Project_triggered();
    void on_actionTexture_Atlas_Builder_triggered();

private:
    Ui::MainWindow *ui;
    SceneCanvas* sceneCanvas;
    TilesetDock* tilesetDock;
    SceneTreeDock* sceneTreeDock;

};

#endif // MAINWINDOW_H
