#ifndef QSFMLCANVAS_H
#define QSFMLCANVAS_H

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Graphics.hpp>
#include <QWidget>
#include <QTimer>
#include <QResizeEvent>


////////////////////////////////////////////////////////////
/// QSFMLCanvas allows to run SFML in a Qt control
////////////////////////////////////////////////////////////
class QSFMLCanvas : public QWidget, public sf::RenderWindow
{
public :

    ////////////////////////////////////////////////////////////
    /// Construct the QSFMLCanvas
    ///
    /// \param Parent :    Parent of the widget
    /// \param Position :  Position of the widget
    /// \param Size :      Size of the widget
    /// \param FrameTime : Frame duration, in milliseconds (0 by default)
    ///
    ////////////////////////////////////////////////////////////
    QSFMLCanvas(QWidget* Parent, const QPoint& Position, const QSize& Size, unsigned int FrameTime = 0);


    ////////////////////////////////////////////////////////////
    /// Destructor
    ///
    ////////////////////////////////////////////////////////////
    virtual ~QSFMLCanvas();

    unsigned int GetWidth  	() const {return (unsigned int)this->size().width();}
    unsigned int GetHeight () const {return (unsigned int)  this->size().height();}
    bool Activate(bool Active) {  if (Active) return setActive(); else return true;}

private :

    ////////////////////////////////////////////////////////////
    /// Notification for the derived class that moment is good
    /// for doing initializations
    ///
    ////////////////////////////////////////////////////////////
    virtual void OnInit();

    ////////////////////////////////////////////////////////////
    /// Notification for the derived class that moment is good
    /// for doing its update and drawing stuff
    ///
    ////////////////////////////////////////////////////////////
    virtual void OnUpdate();

    ////////////////////////////////////////////////////////////
    /// Return the paint engine used by the widget to draw itself
    ///
    ////////////////////////////////////////////////////////////
    virtual QPaintEngine* paintEngine() const;

    ////////////////////////////////////////////////////////////
    /// Called when the widget is shown ;
    /// we use it to initialize our SFML window
    ///QSFMLCANVAS_HPP
    ////////////////////////////////////////////////////////////
    virtual void showEvent(QShowEvent*);

    ////////////////////////////////////////////////////////////
    /// Called when the widget needs to be painted ;
    /// we use it to display a new frame
    ///
    ////////////////////////////////////////////////////////////
    virtual void paintEvent(QPaintEvent*);

    ////////////////////////////////////////////////////////////
    // Member data
    ////////////////////////////////////////////////////////////
    QTimer myTimer;       ///< Timer used to update the view
    bool   myInitialized; ///< Tell whether the SFML window has been initialized or notm
};


#endif // QSFMLCANVAS_H
