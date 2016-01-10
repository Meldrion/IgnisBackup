/********************************************************************************
** Form generated from reading UI file 'openprojectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENPROJECTDIALOG_H
#define UI_OPENPROJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenProjectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QFrame *line;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *edtWorkspace;
    QToolButton *btnLookForProjectPath;
    QLabel *label_2;
    QListWidget *liProjects;
    QFrame *line_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLoad;
    QPushButton *btnDelete;
    QPushButton *btnCancel;

    void setupUi(QDialog *OpenProjectDialog)
    {
        if (OpenProjectDialog->objectName().isEmpty())
            OpenProjectDialog->setObjectName(QStringLiteral("OpenProjectDialog"));
        OpenProjectDialog->resize(400, 340);
        verticalLayout = new QVBoxLayout(OpenProjectDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(OpenProjectDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 50));
        widget_2->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(widget_2);

        line = new QFrame(OpenProjectDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget = new QWidget(OpenProjectDialog);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        edtWorkspace = new QLineEdit(widget);
        edtWorkspace->setObjectName(QStringLiteral("edtWorkspace"));
        edtWorkspace->setReadOnly(true);

        horizontalLayout_2->addWidget(edtWorkspace);

        btnLookForProjectPath = new QToolButton(widget);
        btnLookForProjectPath->setObjectName(QStringLiteral("btnLookForProjectPath"));

        horizontalLayout_2->addWidget(btnLookForProjectPath);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);


        verticalLayout_3->addLayout(formLayout);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        liProjects = new QListWidget(widget);
        liProjects->setObjectName(QStringLiteral("liProjects"));

        verticalLayout_3->addWidget(liProjects);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout->addWidget(widget);

        line_2 = new QFrame(OpenProjectDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        widget_3 = new QWidget(OpenProjectDialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnLoad = new QPushButton(widget_3);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));

        horizontalLayout->addWidget(btnLoad);

        btnDelete = new QPushButton(widget_3);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        horizontalLayout->addWidget(btnDelete);

        btnCancel = new QPushButton(widget_3);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addWidget(widget_3);


        retranslateUi(OpenProjectDialog);
        QObject::connect(btnCancel, SIGNAL(clicked()), OpenProjectDialog, SLOT(reject()));
        QObject::connect(btnLoad, SIGNAL(clicked()), OpenProjectDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(OpenProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenProjectDialog)
    {
        OpenProjectDialog->setWindowTitle(QApplication::translate("OpenProjectDialog", "OpenProjectDialog", 0));
        label->setText(QApplication::translate("OpenProjectDialog", "Workspace Folder", 0));
        btnLookForProjectPath->setText(QApplication::translate("OpenProjectDialog", "...", 0));
        label_2->setText(QApplication::translate("OpenProjectDialog", "Projects in this Workspace", 0));
        btnLoad->setText(QApplication::translate("OpenProjectDialog", "Load Project", 0));
        btnDelete->setText(QApplication::translate("OpenProjectDialog", "Delete Project", 0));
        btnCancel->setText(QApplication::translate("OpenProjectDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenProjectDialog: public Ui_OpenProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENPROJECTDIALOG_H
