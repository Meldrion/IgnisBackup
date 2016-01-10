/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Project;
    QAction *actionOpen_Project;
    QAction *actionSave_Project;
    QAction *actionClose_Project;
    QAction *actionExit_Ignis;
    QAction *actionTexture_Atlas_Builder;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuBuild;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icon/ignis.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew_Project = new QAction(MainWindow);
        actionNew_Project->setObjectName(QStringLiteral("actionNew_Project"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icon/Document-Blank-icon-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Project->setIcon(icon1);
        actionOpen_Project = new QAction(MainWindow);
        actionOpen_Project->setObjectName(QStringLiteral("actionOpen_Project"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icon/Files-icon-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Project->setIcon(icon2);
        actionSave_Project = new QAction(MainWindow);
        actionSave_Project->setObjectName(QStringLiteral("actionSave_Project"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icon/Actions-document-save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Project->setIcon(icon3);
        actionClose_Project = new QAction(MainWindow);
        actionClose_Project->setObjectName(QStringLiteral("actionClose_Project"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icon/dialog-no-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_Project->setIcon(icon4);
        actionExit_Ignis = new QAction(MainWindow);
        actionExit_Ignis->setObjectName(QStringLiteral("actionExit_Ignis"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icon/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit_Ignis->setIcon(icon5);
        actionTexture_Atlas_Builder = new QAction(MainWindow);
        actionTexture_Atlas_Builder->setObjectName(QStringLiteral("actionTexture_Atlas_Builder"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icon/treasure-map-icon-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTexture_Atlas_Builder->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuBuild = new QMenu(menuBar);
        menuBuild->setObjectName(QStringLiteral("menuBuild"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuBuild->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuFile->addAction(actionNew_Project);
        menuFile->addAction(actionOpen_Project);
        menuFile->addAction(actionSave_Project);
        menuFile->addAction(actionClose_Project);
        menuFile->addSeparator();
        menuFile->addAction(actionExit_Ignis);
        menuTools->addAction(actionTexture_Atlas_Builder);
        mainToolBar->addAction(actionNew_Project);
        mainToolBar->addAction(actionOpen_Project);
        mainToolBar->addAction(actionSave_Project);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTexture_Atlas_Builder);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ignis Editor", 0));
        actionNew_Project->setText(QApplication::translate("MainWindow", "New Project", 0));
        actionOpen_Project->setText(QApplication::translate("MainWindow", "Open Project", 0));
        actionSave_Project->setText(QApplication::translate("MainWindow", "Save Project", 0));
        actionClose_Project->setText(QApplication::translate("MainWindow", "Close Project", 0));
        actionExit_Ignis->setText(QApplication::translate("MainWindow", "Exit Ignis", 0));
        actionTexture_Atlas_Builder->setText(QApplication::translate("MainWindow", "Texture Atlas Builder", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuBuild->setTitle(QApplication::translate("MainWindow", "Build", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
