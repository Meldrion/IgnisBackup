#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Init the Project Manager
    Ignis::ProjectManager::getInstance()->init();

    sceneCanvas = new SceneCanvas(this,QPoint(0,0),QSize(640,480),16);
    this->setCentralWidget(sceneCanvas);

    this->tilesetDock = new TilesetDock(this);
    this->sceneTreeDock = new SceneTreeDock(this);

    this->addDockWidget(Qt::LeftDockWidgetArea,this->tilesetDock);
    this->addDockWidget(Qt::LeftDockWidgetArea,this->sceneTreeDock);

    this->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()
        )
    );
}

MainWindow::~MainWindow()
{
    delete ui;
    delete sceneCanvas;
}

void MainWindow::on_actionNew_Project_triggered()
{
    NewProjectDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted)
    {

    }
}

void MainWindow::on_actionTexture_Atlas_Builder_triggered()
{
    TextureAtlasBuilder dialog(this);
    if (dialog.exec() == QDialog::Accepted)
    {

    }
}
