#include "textureatlasbuilder.h"
#include "ui_textureatlasbuilder.h"

TextureAtlasBuilder::TextureAtlasBuilder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TextureAtlasBuilder)
{
    ui->setupUi(this);
    this->textureBuilderScene = new TextureAtlasBuilderScene(this);
    this->ui->textureBuilderCanvas->setScene(this->textureBuilderScene);
}

TextureAtlasBuilder::~TextureAtlasBuilder()
{
    delete ui;
}

void TextureAtlasBuilder::on_comboBox_activated(const QString &value)
{
    QStringList values = value.split("x");
    QString val1 = values.at(0);
    QString val2 = values.at(1);
    int textureWidth = val1.toInt();
    int textureHeight = val2.toInt();
    this->textureBuilderScene->setTextureDimension(textureWidth,textureHeight);
}

void TextureAtlasBuilder::on_pushButton_clicked()
{
    QVector<QString> listOfNames;
    int itemCount = this->ui->liTextures->count();

    for (int i=0;i<itemCount;i++)
    {
        listOfNames.append(this->ui->liTextures->item(i)->text());
    }

    EditTextureDetailsDialog dialog(listOfNames,this);
    if (dialog.exec() == QDialog::Accepted)
    {
        TextureBuilderSubTexture* texture =
                new TextureBuilderSubTexture();
        texture->setTexturePath(dialog.getTexturePath());
        texture->setPos(dialog.getTextureX(),dialog.getTextureY());
        texture->setTextureName(dialog.getTextureName());
        this->textureBuilderScene->addItem(texture);

        this->ui->liTextures->addItem(texture->getTextureName());
    }
}

void TextureAtlasBuilder::on_liTextures_currentRowChanged(int currentRow)
{
    ui->btnEdit->setEnabled(-1 < currentRow);
}
