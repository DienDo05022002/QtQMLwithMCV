#include <QGuiApplication>
//#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlEngine>
#include <qdebug.h>

#include "../LibAppQML/libappqml.h"
#include "../LibAppQML/libappqml_global.h"

#include "itemmodel.h"
#include "controlleritem.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    //Log thông tin của luồng chính
    qDebug() << "app.thread() " << QGuiApplication::instance()->thread();

    //Register for QML
    qmlRegisterType<LibAppQML>("Lib.LibAppQML", 1, 0, "LibAppQML");
    qmlRegisterType<ItemModel>("Qt.ItemModel", 1, 0, "ItemModel");
    qmlRegisterType<ControllerItem>("Qt.ControllerItem", 1, 0, "ControllerItem");

    //### using QQuickView
    QQuickView view;
    view.setSource(QUrl("qrc:/main.qml"));
    QObject::connect(view.engine(), SIGNAL(quit()), &view, SLOT(close()));
    view.show();

    return app.exec();
}
