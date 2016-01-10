/********************************************************************************
** Form generated from reading UI file 'ignis.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IGNIS_H
#define UI_IGNIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IgnisClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *IgnisClass)
    {
        if (IgnisClass->objectName().isEmpty())
            IgnisClass->setObjectName(QStringLiteral("IgnisClass"));
        IgnisClass->resize(600, 400);
        menuBar = new QMenuBar(IgnisClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        IgnisClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(IgnisClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        IgnisClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(IgnisClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        IgnisClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(IgnisClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        IgnisClass->setStatusBar(statusBar);

        retranslateUi(IgnisClass);

        QMetaObject::connectSlotsByName(IgnisClass);
    } // setupUi

    void retranslateUi(QMainWindow *IgnisClass)
    {
        IgnisClass->setWindowTitle(QApplication::translate("IgnisClass", "Ignis", 0));
    } // retranslateUi

};

namespace Ui {
    class IgnisClass: public Ui_IgnisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IGNIS_H
