/********************************************************************************
** Form generated from reading UI file 'edittexturedetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTEXTUREDETAILSDIALOG_H
#define UI_EDITTEXTUREDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditTextureDetailsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *edtTextureName;
    QLabel *label_2;
    QComboBox *cbResourceType;
    QLabel *label_3;
    QSpinBox *spTextureX;
    QLabel *label_4;
    QSpinBox *spTextureY;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLineEdit *edtTexturePath;
    QToolButton *toolButton;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditTextureDetailsDialog)
    {
        if (EditTextureDetailsDialog->objectName().isEmpty())
            EditTextureDetailsDialog->setObjectName(QStringLiteral("EditTextureDetailsDialog"));
        EditTextureDetailsDialog->resize(450, 223);
        verticalLayout = new QVBoxLayout(EditTextureDetailsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(EditTextureDetailsDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        edtTextureName = new QLineEdit(EditTextureDetailsDialog);
        edtTextureName->setObjectName(QStringLiteral("edtTextureName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, edtTextureName);

        label_2 = new QLabel(EditTextureDetailsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        cbResourceType = new QComboBox(EditTextureDetailsDialog);
        cbResourceType->setObjectName(QStringLiteral("cbResourceType"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cbResourceType);

        label_3 = new QLabel(EditTextureDetailsDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        spTextureX = new QSpinBox(EditTextureDetailsDialog);
        spTextureX->setObjectName(QStringLiteral("spTextureX"));

        formLayout->setWidget(3, QFormLayout::FieldRole, spTextureX);

        label_4 = new QLabel(EditTextureDetailsDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        spTextureY = new QSpinBox(EditTextureDetailsDialog);
        spTextureY->setObjectName(QStringLiteral("spTextureY"));

        formLayout->setWidget(4, QFormLayout::FieldRole, spTextureY);

        label_5 = new QLabel(EditTextureDetailsDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        edtTexturePath = new QLineEdit(EditTextureDetailsDialog);
        edtTexturePath->setObjectName(QStringLiteral("edtTexturePath"));
        edtTexturePath->setReadOnly(true);

        horizontalLayout->addWidget(edtTexturePath);

        toolButton = new QToolButton(EditTextureDetailsDialog);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addLayout(formLayout);

        line = new QFrame(EditTextureDetailsDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(EditTextureDetailsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditTextureDetailsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditTextureDetailsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditTextureDetailsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditTextureDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *EditTextureDetailsDialog)
    {
        EditTextureDetailsDialog->setWindowTitle(QApplication::translate("EditTextureDetailsDialog", "Texture Details", 0));
        label->setText(QApplication::translate("EditTextureDetailsDialog", "Resource Name", 0));
        label_2->setText(QApplication::translate("EditTextureDetailsDialog", "Resource Type", 0));
        label_3->setText(QApplication::translate("EditTextureDetailsDialog", "Position X", 0));
        label_4->setText(QApplication::translate("EditTextureDetailsDialog", "Position Y", 0));
        label_5->setText(QApplication::translate("EditTextureDetailsDialog", "Resource Location", 0));
        toolButton->setText(QApplication::translate("EditTextureDetailsDialog", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class EditTextureDetailsDialog: public Ui_EditTextureDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTEXTUREDETAILSDIALOG_H
