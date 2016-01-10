#include "project.h"

Project::Project(QString projectRoot)
{
    this->projectRoot = projectRoot;
    this->assetManager = new Ignis::AssetManager(projectRoot);
}

Project::~Project()
{
    delete this->assetManager;
}

void Project::setProjectTitle(QString title)
{
    this->projectTitle = title;
}

void Project::setProjectAuthor(QString author)
{
    this->projectAuthor = author;
}

void Project::setProjectCompany(QString company)
{
    this->projectCompany = company;
}

