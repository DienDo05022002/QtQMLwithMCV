#include "itemmodel.h"

ItemModel::ItemModel(QObject *parent) : QAbstractListModel(parent)
{

}

int ItemModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid()) {
            return 0;
    }
    return m_items.length();
}

QVariant ItemModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid()) {
        return QVariant();  //Nếu ko hợp lệ trả về QVariant rỗng
    }

    if(role == TextRole) {
        return m_items.at(index.row());  //Nếu hợp lệ trả về dữ liệu tương ứng trong danh sách m_items tại vị trí index.row()
    }
    return QVariant();
}

QHash<int, QByteArray> ItemModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[TextRole] = "text";
    return roles;
}

// #### Handle CRUD ####
void ItemModel::addItem(const QString &text)
{
    beginInsertRows(QModelIndex(), rowCount(),rowCount());
    m_items.append(text);
    endInsertRows();

//    emit m_signals->signalAdd();    //đang emit signal từ class khác
}
void ItemModel::removeItem(int index)
{
    beginRemoveRows(QModelIndex(), index, index);
    m_items.removeAt(index);
    endRemoveRows();

//    emit m_signals->signalRemove();    //đang emit signal từ class khác
}

void ItemModel::updateItem(int index, const QString &text)
{
    m_items[index] = text;
    QModelIndex modelIndex = createIndex(index, 0);
    emit dataChanged(modelIndex, modelIndex, QVector<int>() << TextRole);

//    emit m_signals->signalUpdata();    //đang emit signal từ class khác
}








