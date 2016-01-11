#ifndef TEXTUREATLASBUILDER_H
#define TEXTUREATLASBUILDER_H

#include <QDialog>
#include <QDebug>
#include "gui/edittexturedetailsdialog.h"
#include "component/texturebuilder/textureatlasbuilderscene.h"
#include "component/texturebuilder/texturebuildersubtexture.h"

namespace Ui {
class TextureAtlasBuilder;
}

class TextureAtlasBuilder : public QDialog
{
    Q_OBJECT

public:
    explicit TextureAtlasBuilder(QWidget *parent = 0);
    ~TextureAtlasBuilder();

private slots:
    void on_comboBox_activated(const QString &value);
    void on_pushButton_clicked();
    void liTextures_currentRowChanged(int currentRow);

private:
    Ui::TextureAtlasBuilder *ui;
    TextureAtlasBuilderScene* textureBuilderScene;
};

#endif // TEXTUREATLASBUILDER_H
