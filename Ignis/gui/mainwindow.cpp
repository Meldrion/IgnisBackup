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

	// Center the form on the screen
    this->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()
        )
    );

	// Connect Signal and slots
	this->connect(this->ui->actionNew_Project, SIGNAL(triggered()), this, SLOT(newProjectTriggered()));
	this->connect(this->ui->actionOpen_Project, SIGNAL(triggered()), this, SLOT(loadProjectTriggered()));
	this->connect(this->ui->actionTexture_Atlas_Builder, SIGNAL(triggered()), this, SLOT(textureAtlasBuilderTriggered()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete sceneCanvas;
}

void MainWindow::newProjectTriggered()
{
    NewProjectDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted)
    {

    }
}

void MainWindow::loadProjectTriggered()
{
	OpenProjectDialog dialog(this);
	if (dialog.exec() == QDialog::Accepted)
	{

	}
}

void MainWindow::textureAtlasBuilderTriggered()
{
    TextureAtlasBuilder dialog(this);
    if (dialog.exec() == QDialog::Accepted)
    {

    }
}
