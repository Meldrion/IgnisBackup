#include "openprojectdialog.h"

OpenProjectDialog::OpenProjectDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QString path = Ignis::ProjectManager::getInstance()->getWorkspacePath();
	this->ui.edtWorkspace->setText(path);
	this->initProjectList();
	connect(this->ui.btnLookForProjectPath, SIGNAL(clicked()), this, SLOT(btnLookForProjectPathClicked()));
}

OpenProjectDialog::~OpenProjectDialog()
{

}

void OpenProjectDialog::initProjectList()
{
	this->ui.liProjects->clear();
	QVector<QString> projects = Ignis::ProjectManager::getInstance()->listProjectsInWorkspace();
	for (QVector<QString>::iterator it = projects.begin(); it != projects.end(); ++it)
	{
		QListWidgetItem* listItem = new QListWidgetItem(*it, this->ui.liProjects);
	}
}

void OpenProjectDialog::btnLookForProjectPathClicked()
{
	QString projectFolder = Ignis::ProjectManager::getInstance()->getWorkspacePath();

	// Open Folder Dialog and get the choosen folder
	QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
		projectFolder, QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

	// Check if we did not cancel the dialog
	if (dir != "" && this->ui.edtWorkspace->text() != dir)
	{
		// Set the project location
		this->ui.edtWorkspace->setText(dir);
		Ignis::ProjectManager::getInstance()->setWorkspaceFolder(dir);

		// Recreate the List with the Projects
		this->initProjectList();
	}
}
