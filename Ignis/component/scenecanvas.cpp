#include "scenecanvas.h"

SceneCanvas::SceneCanvas(QWidget* Parent, const QPoint& Position, const QSize& Size, unsigned int FrameTime)
    :QSFMLCanvas(Parent,Position,Size,FrameTime)
{
    QDir dir(qApp->applicationDirPath());
    dir.cdUp();

    #ifdef Q_OS_WIN
        dir.cdUp(); // Windows Only
    #endif

    dir.cd("Ignis/assets");
    this->assetFolderPath = dir.absolutePath();

    this->setMouseTracking(true);
    this->mouseInside = false;
    this->zoomFactor = 1.0f;
    this->tileDim = 32;
    this->setCameraSettings(0,0,this->GetWidth(),this->GetHeight(),0,this->zoomFactor);
}

void SceneCanvas::OnInit()
{  
    if (!sf::Shader::isAvailable())
    {
        // shaders are not available...
        qDebug() << "Oh fuck ! You do not support shaders...";
    }

    shape = sf::RectangleShape(sf::Vector2f(96,96));
    shape.setPosition(0,0);
    shape.setFillColor(sf::Color::Green);

    assetManager = new Ignis::AssetManager(assetFolderPath);
    sprite.setTexture(*assetManager->getAsTexture("/046-Cave04.png"));

    std::string fragmentShader = assetFolderPath.toStdString() + "/shaders/basicshader.fsh.glsl";
    //std::string vertexShader = assetFolderPath.toStdString() + "/shaders/basicshader.vsh.glsl";

    if (!shader.loadFromFile(fragmentShader,sf::Shader::Fragment))
    {
        qDebug() << "Error loading shader";
    }

    sprite.setTextureRect(sf::IntRect(0,0,32,32));
    //sprite.setScale(0.5,0.5);

    sprite2.setTexture(*assetManager->getAsTexture("/046-Cave04.png"));
    sprite2.setTextureRect(sf::IntRect(32,32,32,32));
    //sprite2.setScale(0.5,0.5);
}

void SceneCanvas::OnUpdate()
{
    const int tileDim = 32;
    const float inverseZoomValueTileDim = tileDim * this->zoomFactor;

    int maxTilesX = GetWidth() / inverseZoomValueTileDim;
    int maxTilesY = GetHeight() / inverseZoomValueTileDim;

    sf::Shader::bind(&shader);
    for (int i=0;i <= maxTilesX;i++)
    {
        for (int j=0;j<= maxTilesY;j++)
        {
            sprite.setPosition(i * inverseZoomValueTileDim,j * inverseZoomValueTileDim);
            sprite.setScale(this->zoomFactor,this->zoomFactor);
            this->draw(sprite);

            sprite2.setPosition(i * inverseZoomValueTileDim,j * inverseZoomValueTileDim);
            sprite2.setScale(this->zoomFactor,this->zoomFactor);
            this->draw(sprite2);
        }
    }

    sf::Shader::bind(0x0);

    if (this->mouseInside)
    {
        shape.setPosition(mousePosition.x,mousePosition.y);
        this->draw(shape);
    }
}

void SceneCanvas::resizeEvent(QResizeEvent *event)
{
    // Resize Canvas and Default Viewport
    setSize(sf::Vector2u(event->size().width(), event->size().height()));
    setCameraSettings(0,0,event->size().width(),event->size().height(),0,this->zoomFactor);
}

void SceneCanvas::mouseMoveEvent(QMouseEvent *mouseEvent)
{    
    this->mousePosition.x = qFloor(mouseEvent->x()/tileDim) * tileDim;
    this->mousePosition.y = qFloor(mouseEvent->y()/tileDim) * tileDim;
}

void SceneCanvas::leaveEvent(QEvent *event)
{
    this->mouseInside = false;
}

void SceneCanvas::enterEvent(QEvent *event)
{
    this->mouseInside = true;
}


void SceneCanvas::setCameraSettings(float x, float y, float width, float height, float rotation, float zoom)
{
    sf::FloatRect visibleArea(x,y,width,height);
    sf::View newViewport(visibleArea);
    //newViewport.zoom(zoom);
    newViewport.setRotation(rotation);
    this->setView(newViewport);
}
