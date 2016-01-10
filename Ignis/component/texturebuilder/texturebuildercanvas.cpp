#include "texturebuildercanvas.h"

TextureBuilderCanvas::TextureBuilderCanvas(QWidget *parent):QGraphicsView(parent)
{
    zoomValue = 250;
}

void TextureBuilderCanvas::wheelEvent(QWheelEvent *event)
{
    if (QApplication::keyboardModifiers() & Qt::ControlModifier)
    {
        if (event->delta() > 0)
        {
            this->zoomValue += 6;
            if (500 < this->zoomValue)
            {
                this->zoomValue = 500;
            }
        }
        else
        {
            this->zoomValue -= 6;
            if (this->zoomValue < 0)
            {
                this->zoomValue = 0;
            }
        }

        setupMatrix();
    } else
    {
        QGraphicsView::wheelEvent(event);
    }
}

void TextureBuilderCanvas::setupMatrix()
{
    qreal scale = qPow(qreal(2), (this->zoomValue - 250) / qreal(50));
    if (scale < 0.25) {scale = 0.25;}
    if (scale > 8.0) {scale = 8.0;}
    QMatrix matrix;
    matrix.scale(scale, scale);
    this->setMatrix(matrix);
}
