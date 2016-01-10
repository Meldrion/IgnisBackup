#include "gui/mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;

	QSplashScreen splash;
	splash.setPixmap(QPixmap(":/icons/icon/splashScreen.png"));
	splash.show();

	QTimer::singleShot(2500, &splash, SLOT(close()));
	QTimer::singleShot(2500, &w, SLOT(show()));

	return a.exec();
}
