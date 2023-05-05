#ifndef ITEMMODEL_H
#define ITEMMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include "controlleritem.h"

class ItemModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ItemModel(QObject *parent = nullptr);
    enum Roles{
        TextRole = Qt::UserRole + 1
    };

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;   // trả về số lượng hàng (mục) trong model
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;   //trả về dữ liệu tại một chỉ mục (index) và vai trò (role) cụ thể trong model
    QHash<int, QByteArray> roleNames() const override;

signals:

public slots:
    Q_INVOKABLE void addItem(const QString &text);
    Q_INVOKABLE void removeItem(int index);
    Q_INVOKABLE void updateItem(int index, const QString &text);

private:
    QList<QString> m_items;
    ControllerItem* m_signals;
};

#endif // ITEMMODEL_H
