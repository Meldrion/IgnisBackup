#include "newprojectdialog.h"
#include "ui_newprojectdialog.h"

NewProjectDialog::NewProjectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProjectDialog)
{
    ui->setupUi(this);
    QString path = Ignis::ProjectManager::getInstance()->getWorkspacePath();
    this->ui->edtWorkspace->setText(path);
	this->generatedProject = 0x0;

	// Get the Username of the currently logged in user
	QString name = qgetenv("USER");
	if (name.isEmpty())
		name = qgetenv("USERNAME");
	this->ui->edtAuthor->setText(name);

	connect(this->ui->btnLookForProjectPath, SIGNAL(clicked()), this, SLOT(btnLookForProjectPathClicked()));
}

NewProjectDialog::~NewProjectDialog()
{
    delete ui;
}

void NewProjectDialog::accept()
{

	QString base = this->ui->edtWorkspace->text();
	QString projectFolderName = this->ui->edtProjectFolder->text();

	int returnCode = Ignis::Project::createProjectStructure(base, projectFolderName);

	if (returnCode == 0)
	{
		QString projectFullPath = base + "/" + projectFolderName;
		Ignis::Project* project = new Ignis::Project(projectFullPath);
		
		project->setProjectTitle(this->ui->edtProjectTitle->text());
		project->setProjectAuthor(this->ui->edtAuthor->text());
		project->setProjectCompany(this->ui->edtCompany->text());

		int projectFinalizeReturnCode = Ignis::Project::finalizeProject(project);

		if (projectFinalizeReturnCode == 0)
		{
			this->generatedProject = project;
			QDialog::accept();
		}
		else
		{
			// Output Error

			// Delete the projectDummy
			delete project;

			QDir projDir;
			projDir.rmdir(projectFullPath);
		}
	}
	else
	{
		// Give an Error Message
		switch (returnCode)
		{
			// We need the error codes here
			case -1: return;
			default: return;
		}
	}
}

Ignis::Project* NewProjectDialog::getGeneratedProject()
{
	return this->generatedProject;
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
