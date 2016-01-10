#ifndef SCENETREEWIDGET_H
#define SCENETREEWIDGET_H

#include <QTreeWidget>

class SceneTree : public QTreeWidget
{
public:
    SceneTree(QWidget* parent = 0);
    QSize sizeHint() const;
signals:

public slots:
};

#endif // SCENETREEWIDGET_H
