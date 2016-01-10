#ifndef PROJECT_H
#define PROJECT_H

#include "assets/assetmanager.h"


class Project
{
public:
    Project(QString projectRoot);
    void setProjectTitle(QString title);
    void setProjectAuthor(QString author);
    void setProjectCompany(QString company);
    ~Project();
private:
    Ignis::AssetManager* assetManager;
    QString projectRoot;
    QString projectTitle;
    QString projectAuthor;
    QString projectCompany;
};

#endif // PROJECT_H
