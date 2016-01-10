#include "newprojectdialog.h"
#include "ui_newprojectdialog.h"

NewProjectDialog::NewProjectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProjectDialog)
{
    ui->setupUi(this);
    QString path = Ignis::ProjectManager::getInstance()->getWorkspacePath();
    this->ui->edtWorkspace->setText(path);

	connect(this->ui->btnLookForProjectPath, SIGNAL(clicked()), this, SLOT(btnLookForProjectPathClicked()));
}

NewProjectDialog::~NewProjectDialog()
{
    delete ui;
}

void NewProjectDialog::btnLookForProjectPathClicked()
{
    QString projectFolder = Ignis::ProjectManager::getInstance()->getWorkspacePath();

    // Open Folder Dialog and get the choosen folder
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
        projectFolder,QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);

    // Check if we did not cancel the dialog
    if (dir != "")
    {
        // Set the project location
        this->ui->edtWorkspace->setText(dir);
        Ignis::ProjectManager::getInstance()->setWorkspaceFolder(dir);
    }
}
