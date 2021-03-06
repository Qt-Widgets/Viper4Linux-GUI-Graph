/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a adaptor.h:adaptor.cpp -p clientproxy.h:clientproxy.cpp dbus/manifest.xml cf.thebone.viper4linux.Gui
 *
 * qdbusxml2cpp is Copyright (C) 2019 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CLIENTPROXY_H
#define CLIENTPROXY_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface cf.thebone.viper4linux.Gui
 */
class CfTheboneViper4linuxGuiInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "cf.thebone.viper4linux.Gui"; }

public:
    CfTheboneViper4linuxGuiInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~CfTheboneViper4linuxGuiInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> hide()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("hide"), argumentList);
    }

    inline QDBusPendingReply<> raiseWindow()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("raiseWindow"), argumentList);
    }

    inline QDBusPendingReply<> show()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("show"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace cf {
  namespace thebone {
    namespace viper4linux {
      typedef ::CfTheboneViper4linuxGuiInterface Gui;
    }
  }
}
#endif
