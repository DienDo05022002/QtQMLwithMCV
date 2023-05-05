#ifndef LIBAPPQML_H
#define LIBAPPQML_H

#include "libappqml_global.h"
#include <QObject>
class LIBAPPQMLSHARED_EXPORT LibAppQML : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString status READ status WRITE setStatus NOTIFY statusChanged)
public:
    explicit LibAppQML(QObject *parent = nullptr);
    virtual ~LibAppQML();

    Q_INVOKABLE void login(QString const &userName, QString const &password);
    QString status()const;
    void setStatus(QString const &status);


signals:
    void loginSuccess();
    void loginFalse();
    void statusChanged();
private:
    QString mStatus;
};

#endif // LIBAPPQML_H
