/********************************************************************************
** Form generated from reading UI file 'textureatlasbuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTUREATLASBUILDER_H
#define UI_TEXTUREATLASBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "component/texturebuilder/texturebuildercanvas.h"

QT_BEGIN_NAMESPACE

class Ui_TextureAtlasBuilder
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFrame *line;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    TextureBuilderCanvas *textureBuilderCanvas;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QListWidget *liTextures;
    QPushButton *pushButton;
    QPushButton *btnEdit;
    QPushButton *pushButton_2;
    QFrame *line_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TextureAtlasBuilder)
    {
        if (TextureAtlasBuilder->objectName().isEmpty())
            TextureAtlasBuilder->setObjectName(QStringLiteral("TextureAtlasBuilder"));
        TextureAtlasBuilder->resize(640, 578);
        verticalLayout = new QVBoxLayout(TextureAtlasBuilder);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(TextureAtlasBuilder);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 50));
        widget->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(widget);

        line = new QFrame(TextureAtlasBuilder);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget_2 = new QWidget(TextureAtlasBuilder);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textureBuilderCanvas = new TextureBuilderCanvas(widget_2);
        textureBuilderCanvas->setObjectName(QStringLiteral("textureBuilderCanvas"));

        horizontalLayout->addWidget(textureBuilderCanvas);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        lineEdit = new QLineEdit(widget_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(lineEdit);

        label = new QLabel(widget_4);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        comboBox = new QComboBox(widget_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_4->addWidget(comboBox);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        liTextures = new QListWidget(widget_4);
        liTextures->setObjectName(QStringLiteral("liTextures"));
        sizePolicy.setHeightForWidth(liTextures->sizePolicy().hasHeightForWidth());
        liTextures->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(liTextures);

        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        btnEdit = new QPushButton(widget_4);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));
        btnEdit->setEnabled(false);

        verticalLayout_4->addWidget(btnEdit);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);


        verticalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout->addWidget(widget_4);


        verticalLayout->addWidget(widget_2);

        line_2 = new QFrame(TextureAtlasBuilder);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        widget_3 = new QWidget(TextureAtlasBuilder);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        buttonBox = new QDialogButtonBox(widget_3);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout->addWidget(widget_3);


        retranslateUi(TextureAtlasBuilder);
        QObject::connect(buttonBox, SIGNAL(accepted()), TextureAtlasBuilder, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(accepted()), TextureAtlasBuilder, SLOT(reject()));

        QMetaObject::connectSlotsByName(TextureAtlasBuilder);
    } // setupUi

    void retranslateUi(QDialog *TextureAtlasBuilder)
    {
        TextureAtlasBuilder->setWindowTitle(QApplication::translate("TextureAtlasBuilder", "Texture Atlas Builder", 0));
        label_3->setText(QApplication::translate("TextureAtlasBuilder", "Name", 0));
        label->setText(QApplication::translate("TextureAtlasBuilder", "Texture Dimension", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("TextureAtlasBuilder", "64x64", 0)
         << QApplication::translate("TextureAtlasBuilder", "128x128", 0)
         << QApplication::translate("TextureAtlasBuilder", "256x256", 0)
         << QApplication::translate("TextureAtlasBuilder", "512x512", 0)
         << QApplication::translate("TextureAtlasBuilder", "1024x1024", 0)
         << QApplication::translate("TextureAtlasBuilder", "2048x2048", 0)
         << QApplication::translate("TextureAtlasBuilder", "4096x4096", 0)
        );
        comboBox->setCurrentText(QApplication::translate("TextureAtlasBuilder", "64x64", 0));
        label_2->setText(QApplication::translate("TextureAtlasBuilder", "Textures", 0));
        pushButton->setText(QApplication::translate("TextureAtlasBuilder", "Add Texture", 0));
        btnEdit->setText(QApplication::translate("TextureAtlasBuilder", "Edit Texture Settings", 0));
        pushButton_2->setText(QApplication::translate("TextureAtlasBuilder", "Remove Texture", 0));
    } // retranslateUi

};

namespace Ui {
    class TextureAtlasBuilder: public Ui_TextureAtlasBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTUREATLASBUILDER_H
