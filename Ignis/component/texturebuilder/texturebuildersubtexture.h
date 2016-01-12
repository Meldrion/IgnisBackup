#ifndef TEXTUREBUILDERSUBTEXTURE_H
#define TEXTUREBUILDERSUBTEXTURE_H

#include <QGraphicsObject>
#include <QPainter>
#include <QRectF>
#include <QString>
#include <QPixmap>
#include <QDebug>

class TextureBuilderSubTexture : public QGraphicsObject
{
	Q_OBJECT
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
	void mousePressEvent(QGraphicsSceneMouseEvent* mouseEvent);
	void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* mouseEvent);
private:
    int width;
    int height;
    QString texturePath;
    QPixmap* texture;
    QString name;
	bool selected;

public slots:

signals :
	void selectedItemChanged(TextureBuilderSubTexture* texture);
	void itemReceivedDoubleClick(TextureBuilderSubTexture* texture);
};

#endif // TEXTUREBUILDERSUBTEXTURE_H
