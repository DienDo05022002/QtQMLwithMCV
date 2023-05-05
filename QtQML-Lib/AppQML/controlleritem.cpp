#include "controlleritem.h"

ControllerItem::ControllerItem(QObject *parent) : QObject(parent)
{
    m_signals = new ItemModel(this);
}

void ControllerItem::signalAddItem(const QString &text)
{
    m_signals->addItem(text);
    emit signalAdd();
}

void ControllerItem::signalRemoveItem(int index)
{
    m_signals->removeItem(index);
    emit signalRemove();
}

void ControllerItem::signalUpdateItem(int index, const QString &text)
{
    m_signals->updateItem(index, text);
    emit signalUpdata();
}

ItemModel *ControllerItem::getData() const
{
    return m_signals;
}

