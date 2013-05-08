/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c DBusIfAdaptor -a dbusifadaptor.h:dbusifadaptor.cpp org.scorpius.Yappari.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DBUSIFADAPTOR_H_1368489962
#define DBUSIFADAPTOR_H_1368489962

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface org.scorpius.Yappari
 */
class DBusIfAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.scorpius.Yappari")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.scorpius.Yappari\">\n"
"    <method name=\"ShowWindow\"/>\n"
"    <method name=\"isRunning\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"text\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    DBusIfAdaptor(QObject *parent);
    virtual ~DBusIfAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void ShowWindow();
    bool isRunning();
Q_SIGNALS: // SIGNALS
};

#endif
