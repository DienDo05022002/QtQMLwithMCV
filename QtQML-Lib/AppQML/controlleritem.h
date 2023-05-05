
#ifndef CONTROLLERITEM_H
#define CONTROLLERITEM_H

#include <QObject>
#include "itemmodel.h"

class ControllerItem : public QObject
{
    Q_OBJECT
public:
    explicit ControllerItem(QObject *parent = nullptr);
    Q_INVOKABLE void signalAddItem(const QString &text);
    Q_INVOKABLE void signalRemoveItem(int index);
    Q_INVOKABLE void signalUpdateItem(int index, const QString &text);

    Q_INVOKABLE ItemModel* getData() const;

signals:
    void signalAdd();
    void signalRemove();
    void signalUpdata();

public slots:
private:
    ItemModel *m_signals;
};

#endif // CONTROLLERITEM_H

