/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c DBusNokiaHildonSVNDIf -p dbusnokiahildonsvndif.h:dbusnokiahildonsvndif.cpp com.nokia.HildonSVNotificationDaemon.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSNOKIAHILDONSVNDIF_H_1368489962
#define DBUSNOKIAHILDONSVNDIF_H_1368489962

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.nokia.HildonSVNotificationDaemon
 */
class DBusNokiaHildonSVNDIf: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.nokia.HildonSVNotificationDaemon"; }

public:
    DBusNokiaHildonSVNDIf(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DBusNokiaHildonSVNDIf();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int> PlayEvent(const QVariantMap &hints, const QString &notification_sender)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(hints) << qVariantFromValue(notification_sender);
        return asyncCallWithArgumentList(QLatin1String("PlayEvent"), argumentList);
    }

    inline QDBusPendingReply<> StopEvent(int id)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(id);
        return asyncCallWithArgumentList(QLatin1String("StopEvent"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace nokia {
    typedef ::DBusNokiaHildonSVNDIf HildonSVNotificationDaemon;
  }
}
#endif
