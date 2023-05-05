#ifndef CONTROLLERITEM_H
#define CONTROLLERITEM_H

#include <QObject>

class ControllerItem : public QObject
{
    Q_OBJECT
public:
    explicit ControllerItem(QObject *parent = nullptr);

signals:
    void signalAdd();
    void signalRemove();
    void signalUpdata();

public slots:
};

#endif // CONTROLLERITEM_H

