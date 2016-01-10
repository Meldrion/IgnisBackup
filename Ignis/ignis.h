#ifndef IGNIS_H
#define IGNIS_H

#include <QtWidgets/QMainWindow>
#include "ui_ignis.h"

class Ignis : public QMainWindow
{
	Q_OBJECT

public:
	Ignis(QWidget *parent = 0);
	~Ignis();

private:
	Ui::IgnisClass ui;
};

#endif // IGNIS_H
