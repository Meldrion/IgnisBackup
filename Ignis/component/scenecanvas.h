#ifndef MYGAMECANVAS_H
#define MYGAMECANVAS_H

#include <QDebug>
#include <QResizeEvent>
#include "qsfmlcanvas.h"
#include <QApplication>
#include <QDir>
#include <QtMath>
#include "assets/assetmanager.h"

class SceneCanvas: public QSFMLCanvas
{
public:

    SceneCanvas(QWidget* Parent, const QPoint& Position, const QSize& Size, unsigned int FrameTime);
    void OnInit();
    void OnUpdate();
    void resizeEvent(QResizeEvent* event);
    void mouseMoveEvent(QMouseEvent *mouseEvent);
    void leaveEvent(QEvent *event);
    void enterEvent(QEvent *event);

private:

    Ignis::AssetManager* assetManager;
    QString assetFolderPath;
    sf::RectangleShape shape;
    sf::Texture* texture;
    sf::Sprite sprite;
    sf::Sprite sprite2;
    sf::Shader shader;
    sf::Vector2i mousePosition;
    bool mouseInside;
    float zoomFactor;
    float tileDim;
    void setCameraSettings(float x,float y,float width,float height,float rotation,float zoom);

signals:

public slots:
};

#endif // MYGAMECANVAS_H
