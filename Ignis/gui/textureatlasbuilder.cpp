#include "textureatlasbuilder.h"
#include "ui_textureatlasbuilder.h"

TextureAtlasBuilder::TextureAtlasBuilder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TextureAtlasBuilder)
{
    ui->setupUi(this);
    this->textureBuilderScene = new TextureAtlasBuilderScene(this);
    this->ui->textureBuilderCanvas->setScene(this->textureBuilderScene);

	this->connect(this->ui->liTextures, SIGNAL(currentRowChanged(int)),
		this, SLOT(liTextures_currentRowChanged(int)));

	QGraphicsItem* item = this->textureBuilderScene->items().at(0);
	TextureBuilderTexture* texture = dynamic_cast<TextureBuilderTexture*>(item);
	
	this->connect(this->ui->liTextures, 
				  SIGNAL(currentRowChanged(int)),
				  texture,
				  SLOT(selectedTextureChanged(int)));

	this->connect(this->ui->btnAdd, SIGNAL(clicked()), this, SLOT(btnAddClicked()));
	this->connect(this->ui->btnEdit, SIGNAL(clicked()), this, SLOT(btnEditClicked()));
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

void TextureAtlasBuilder::btnAddClicked()
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
		TextureBuilderTexture* parent = this->textureBuilderScene->getRoot();
		
		TextureBuilderSubTexture* texture =
			new TextureBuilderSubTexture(parent);

        texture->setTexturePath(dialog.getTexturePath());
        texture->setPos(dialog.getTextureX(),dialog.getTextureY());
        texture->setTextureName(dialog.getTextureName());

        this->ui->liTextures->addItem(texture->getTextureName());

		
		this->connect(texture, SIGNAL(selectedItemChanged(TextureBuilderSubTexture*)),
			this, SLOT(textureSelectionChanged(TextureBuilderSubTexture*)));

		this->connect(texture, SIGNAL(itemReceivedDoubleClick(TextureBuilderSubTexture*)),
			this, SLOT(doubleClickEventOnItem(TextureBuilderSubTexture*)));

		this->connect(this->ui->liTextures, SIGNAL(itemDoubleClicked(QListWidgetItem*)), 
			this, SLOT(doubleClickEventOnListWidget(QListWidgetItem*)));

		// Select the new Element
		this->ui->liTextures->setCurrentRow(this->ui->liTextures->count() - 1);
    }
}

void TextureAtlasBuilder::btnEditClicked()
{
	int index = this->ui->liTextures->currentRow();
	TextureBuilderSubTexture* subTexture = this->textureBuilderScene->getRoot()->getSubTexture(index);
	if (subTexture)
	{
		QVector<QString> listOfNames;
		int itemCount = this->ui->liTextures->count();

		for (int i = 0; i<itemCount; i++)
		{
			listOfNames.append(this->ui->liTextures->item(i)->text());
		}

		EditTextureDetailsDialog dialog(listOfNames, this,subTexture);
		if (dialog.exec() == QDialog::Accepted)
		{
			subTexture->setTextureName(dialog.getTextureName());
			subTexture->setTexturePath(dialog.getTexturePath());
			subTexture->setPos(dialog.getTextureX(), dialog.getTextureY());
		}
	}
}

void TextureAtlasBuilder::liTextures_currentRowChanged(int currentRow)
{
    ui->btnEdit->setEnabled(-1 < currentRow);
}


void TextureAtlasBuilder::textureSelectionChanged(TextureBuilderSubTexture* texture)
{
	int index = this->textureBuilderScene->getRoot()->indexForSubTexture(texture);
	this->ui->liTextures->setCurrentRow(index);
}

void TextureAtlasBuilder::doubleClickEventOnItem(TextureBuilderSubTexture* texture)
{
	textureSelectionChanged(texture);
	btnEditClicked();
}

void TextureAtlasBuilder::doubleClickEventOnListWidget(QListWidgetItem* item)
{
	btnEditClicked();
}