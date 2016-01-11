#ifndef TEXTUREBUILDERSUBTEXTURE_H
#define TEXTUREBUILDERSUBTEXTURE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QString>
#include <QPixmap>

class TextureBuilderSubTexture : public QGraphicsItem
{
public:
    TextureBuilderSubTexture(QGraphicsItem* parent = 0);
    ~TextureBuilderSubTexture();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    void setTexturePath(QString path);
    void setTextureName(QString name);
    QString getTextureName();
	void setSelection(bool flag);
	bool isSelected();
private:
    int width;
    int height;
    QString texturePath;
    QPixmap* texture;
    QString name;
	bool selected;
signals:

public slots:
};

#endif // TEXTUREBUILDERSUBTEXTURE_H
