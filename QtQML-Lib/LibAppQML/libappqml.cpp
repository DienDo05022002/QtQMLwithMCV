#include "libappqml.h"

LibAppQML::LibAppQML(QObject *parent) : QObject (parent)
{
}

LibAppQML::~LibAppQML()
{

}

void LibAppQML::login(const QString &userName, const QString &password)
{
    if(userName == "123" && password == "123") {
        emit loginSuccess();
    } else {
        setStatus("Tai khoan khong dung");
        emit loginFalse();
    }
}

QString LibAppQML::status() const
{
    return mStatus;
}

void LibAppQML::setStatus(const QString &status)
{
    if(mStatus == status) {
        return;
    } else {
        mStatus = status;
        emit statusChanged();
    }
}

