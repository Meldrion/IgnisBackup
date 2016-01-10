/********************************************************************************
** Form generated from reading UI file 'newprojectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTDIALOG_H
#define UI_NEWPROJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProjectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *header;
    QFrame *line;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *edtWorkspace;
    QToolButton *btnLookForProjectPath;
    QLabel *label_2;
    QLineEdit *edtProjectFolder;
    QLabel *label_3;
    QLineEdit *edtAuthor;
    QLabel *label_4;
    QLineEdit *edtCompany;
    QCheckBox *cbImport;
    QLineEdit *edtProjectTitle;
    QLabel *label_5;
    QFrame *line_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewProjectDialog)
    {
        if (NewProjectDialog->objectName().isEmpty())
            NewProjectDialog->setObjectName(QStringLiteral("NewProjectDialog"));
        NewProjectDialog->resize(450, 340);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icon/ignis.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewProjectDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(NewProjectDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        header = new QWidget(NewProjectDialog);
        header->setObjectName(QStringLiteral("header"));
        header->setMinimumSize(QSize(0, 50));
        header->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(header);

        line = new QFrame(NewProjectDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget_2 = new QWidget(NewProjectDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(6, -1, 6, -1);
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        edtWorkspace = new QLineEdit(widget_2);
        edtWorkspace->setObjectName(QStringLiteral("edtWorkspace"));
        edtWorkspace->setReadOnly(true);

        horizontalLayout_2->addWidget(edtWorkspace);

        btnLookForProjectPath = new QToolButton(widget_2);
        btnLookForProjectPath->setObjectName(QStringLiteral("btnLookForProjectPath"));

        horizontalLayout_2->addWidget(btnLookForProjectPath);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        edtProjectFolder = new QLineEdit(widget_2);
        edtProjectFolder->setObjectName(QStringLiteral("edtProjectFolder"));

        formLayout->setWidget(1, QFormLayout::FieldRole, edtProjectFolder);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        edtAuthor = new QLineEdit(widget_2);
        edtAuthor->setObjectName(QStringLiteral("edtAuthor"));

        formLayout->setWidget(4, QFormLayout::FieldRole, edtAuthor);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        edtCompany = new QLineEdit(widget_2);
        edtCompany->setObjectName(QStringLiteral("edtCompany"));

        formLayout->setWidget(5, QFormLayout::FieldRole, edtCompany);

        cbImport = new QCheckBox(widget_2);
        cbImport->setObjectName(QStringLiteral("cbImport"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cbImport);

        edtProjectTitle = new QLineEdit(widget_2);
        edtProjectTitle->setObjectName(QStringLiteral("edtProjectTitle"));

        formLayout->setWidget(2, QFormLayout::FieldRole, edtProjectTitle);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(widget_2);

        line_2 = new QFrame(NewProjectDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        widget = new QWidget(NewProjectDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(edtProjectFolder, cbImport);
        QWidget::setTabOrder(cbImport, edtAuthor);
        QWidget::setTabOrder(edtAuthor, edtCompany);
        QWidget::setTabOrder(edtCompany, edtWorkspace);
        QWidget::setTabOrder(edtWorkspace, btnLookForProjectPath);

        retranslateUi(NewProjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewProjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewProjectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *NewProjectDialog)
    {
        NewProjectDialog->setWindowTitle(QApplication::translate("NewProjectDialog", "New Project", 0));
        label->setText(QApplication::translate("NewProjectDialog", "Workspace Folder", 0));
        btnLookForProjectPath->setText(QApplication::translate("NewProjectDialog", "...", 0));
        label_2->setText(QApplication::translate("NewProjectDialog", "Project Folder", 0));
        label_3->setText(QApplication::translate("NewProjectDialog", "Author Name", 0));
        label_4->setText(QApplication::translate("NewProjectDialog", "Company Name", 0));
        cbImport->setText(QApplication::translate("NewProjectDialog", "Import Standart Resource Kit", 0));
        label_5->setText(QApplication::translate("NewProjectDialog", "Project Title", 0));
    } // retranslateUi

};

namespace Ui {
    class NewProjectDialog: public Ui_NewProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTDIALOG_H
