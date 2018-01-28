main.cpp: In function ‘void append(const QStringList&)’:
main.cpp:19:26: error: conversion from ‘const QStringList’ to non-scalar type ‘QString’ requested
     QString cmdlinearg = s;
                          ^
main.cpp:30:30: error: no match for ‘operator==’ (operand types are ‘const QChar’ and ‘const char [4]’)
         if (cmdlinearg.at(i) == "put")
             ~~~~~~~~~~~~~~~~~^~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:392:13: note: candidate: bool operator==(QChar, QChar) <near match>
 inline bool operator==(QChar c1, QChar c2) { return c1.unicode() == c2.unicode(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qchar.h:392:13: note:   conversion of argument 2 would be ill-formed:
main.cpp:30:33: error: conversion from ‘const char [4]’ to ‘QChar’ is ambiguous
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:383:8: note: candidate: QChar::QChar(int) <near match>
 inline QChar::QChar(int rc) : ucs(ushort(rc & 0xffff)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:383:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:30:33: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:382:8: note: candidate: QChar::QChar(uint) <near match>
 inline QChar::QChar(uint rc) : ucs(ushort(rc & 0xffff)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:382:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:30:33: error: invalid conversion from ‘const char*’ to ‘uint {aka unsigned int}’ [-fpermissive]
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:381:8: note: candidate: QChar::QChar(short int) <near match>
 inline QChar::QChar(short rc) : ucs(ushort(rc)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:381:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:30:33: error: invalid conversion from ‘const char*’ to ‘short int’ [-fpermissive]
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:81:12: note: candidate: QChar::QChar(ushort) <near match>
     inline QChar(ushort rc) : ucs(rc){}
            ^~~~~
/usr/include/qt4/QtCore/qchar.h:81:12: note:   conversion of argument 1 would be ill-formed:
main.cpp:30:33: error: invalid conversion from ‘const char*’ to ‘ushort {aka short unsigned int}’ [-fpermissive]
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:77:36: note: candidate: QChar::QChar(uchar) <near match>
     QT_ASCII_CAST_WARN_CONSTRUCTOR QChar(uchar c);
                                    ^~~~~
/usr/include/qt4/QtCore/qchar.h:77:36: note:   conversion of argument 1 would be ill-formed:
main.cpp:30:33: error: invalid conversion from ‘const char*’ to ‘uchar {aka unsigned char}’ [-fpermissive]
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:76:36: note: candidate: QChar::QChar(char) <near match>
     QT_ASCII_CAST_WARN_CONSTRUCTOR QChar(char c);
                                    ^~~~~
/usr/include/qt4/QtCore/qchar.h:76:36: note:   conversion of argument 1 would be ill-formed:
main.cpp:30:33: error: invalid conversion from ‘const char*’ to ‘char’ [-fpermissive]
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qnamespace.h:45:0,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qglobal.h:2140:13: note: candidate: bool operator==(QBool, bool)
 inline bool operator==(QBool b1, bool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2140:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QBool’
/usr/include/qt4/QtCore/qglobal.h:2141:13: note: candidate: bool operator==(bool, QBool)
 inline bool operator==(bool b1, QBool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2141:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘bool’
/usr/include/qt4/QtCore/qglobal.h:2142:13: note: candidate: bool operator==(QBool, QBool)
 inline bool operator==(QBool b1, QBool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2142:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QBool’
In file included from /usr/include/qt4/QtCore/qstring.h:46:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qbytearray.h:527:13: note: candidate: bool operator==(const QByteArray&, const QByteArray&)
 inline bool operator==(const QByteArray &a1, const QByteArray &a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:527:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QByteArray&’
/usr/include/qt4/QtCore/qbytearray.h:529:13: note: candidate: bool operator==(const QByteArray&, const char*)
 inline bool operator==(const QByteArray &a1, const char *a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:529:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QByteArray&’
/usr/include/qt4/QtCore/qbytearray.h:531:13: note: candidate: bool operator==(const char*, const QByteArray&)
 inline bool operator==(const char *a1, const QByteArray &a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:531:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
In file included from /usr/include/qt4/QtCore/qobject.h:48:0,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qstring.h:908:13: note: candidate: bool operator==(QString::Null, QString::Null)
 inline bool operator==(QString::Null, QString::Null) { return true; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:908:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:909:13: note: candidate: bool operator==(QString::Null, const QString&)
 inline bool operator==(QString::Null, const QString &s) { return s.isNull(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:909:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:910:13: note: candidate: bool operator==(const QString&, QString::Null)
 inline bool operator==(const QString &s, QString::Null) { return s.isNull(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:910:13: note:   no known conversion for argument 2 from ‘const char [4]’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:936:32: note: candidate: bool operator==(const char*, const QString&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QString &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:936:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:949:32: note: candidate: bool operator==(const char*, const QLatin1String&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QLatin1String &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:949:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:962:13: note: candidate: bool operator==(const QLatin1String&, const QLatin1String&)
 inline bool operator==(const QLatin1String &s1, const QLatin1String &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:962:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QLatin1String&’
/usr/include/qt4/QtCore/qstring.h:1202:20: note: candidate: bool operator==(const QStringRef&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QStringRef &s1,const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1202:20: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1205:20: note: candidate: bool operator==(const QString&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QString &s1,const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1205:20: note:   no known conversion for argument 2 from ‘const char [4]’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1208:13: note: candidate: bool operator==(const QStringRef&, const QString&)
 inline bool operator==(const QStringRef &s1,const QString &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1208:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1212:20: note: candidate: bool operator==(const QLatin1String&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QLatin1String &s1, const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1212:20: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QLatin1String&’
/usr/include/qt4/QtCore/qstring.h:1215:13: note: candidate: bool operator==(const QStringRef&, const QLatin1String&)
 inline bool operator==(const QStringRef &s1,const QLatin1String &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1215:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1236:32: note: candidate: bool operator==(const char*, const QStringRef&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QStringRef &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1236:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:1238:32: note: candidate: bool operator==(const QStringRef&, const char*)
 inline QT_ASCII_CAST_WARN bool operator==(const QStringRef &s1, const char *s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1238:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
In file included from /usr/include/qt4/QtCore/qobject.h:54:0,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qscopedpointer.h:174:13: note: candidate: template<class T, class Cleanup> bool operator==(const QScopedPointer<T, Cleanup>&, const QScopedPointer<T, Cleanup>&)
 inline bool operator==(const QScopedPointer<T, Cleanup> &lhs, const QScopedPointer<T, Cleanup> &rhs)
             ^~~~~~~~
/usr/include/qt4/QtCore/qscopedpointer.h:174:13: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const QScopedPointer<T, Cleanup>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtGui/qapplication.h:47:0,
                 from ../../lib/include/ext_udp.h:4,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpoint.h:161:13: note: candidate: bool operator==(const QPoint&, const QPoint&)
 inline bool operator==(const QPoint &p1, const QPoint &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpoint.h:161:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QPoint&’
/usr/include/qt4/QtCore/qpoint.h:329:13: note: candidate: bool operator==(const QPointF&, const QPointF&)
 inline bool operator==(const QPointF &p1, const QPointF &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpoint.h:329:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QPointF&’
In file included from /usr/include/qt4/QtGui/qapplication.h:48:0,
                 from ../../lib/include/ext_udp.h:4,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsize.h:156:13: note: candidate: bool operator==(const QSize&, const QSize&)
 inline bool operator==(const QSize &s1, const QSize &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qsize.h:156:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QSize&’
/usr/include/qt4/QtCore/qsize.h:314:13: note: candidate: bool operator==(const QSizeF&, const QSizeF&)
 inline bool operator==(const QSizeF &s1, const QSizeF &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qsize.h:314:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QSizeF&’
In file included from /usr/include/qt4/QtCore/qhash.h:49:0,
                 from /usr/include/qt4/QtCore/qcache.h:45,
                 from /usr/include/qt4/QtCore/QtCore:7,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpair.h:70:24: note: candidate: template<class T1, class T2> bool operator==(const QPair<T1, T2>&, const QPair<T1, T2>&)
 Q_INLINE_TEMPLATE bool operator==(const QPair<T1, T2> &p1, const QPair<T1, T2> &p2)
                        ^~~~~~~~
/usr/include/qt4/QtCore/qpair.h:70:24: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const QPair<T1, T2>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qcache.h:45:0,
                 from /usr/include/qt4/QtCore/QtCore:7,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qhash.h:198:13: note: candidate: bool operator==(const QHashDummyValue&, const QHashDummyValue&)
 inline bool operator==(const QHashDummyValue & /* v1 */, const QHashDummyValue & /* v2 */)
             ^~~~~~~~
/usr/include/qt4/QtCore/qhash.h:198:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QHashDummyValue&’
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:694:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const QSharedPointer<T>&)
 bool operator==(const QSharedPointer<T> &ptr1, const QSharedPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:694:6: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:705:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const X*)
 bool operator==(const QSharedPointer<T> &ptr1, const X *ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:705:6: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:710:6: note: candidate: template<class T, class X> bool operator==(const T*, const QSharedPointer<T>&)
 bool operator==(const T *ptr1, const QSharedPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:710:6: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   mismatched types ‘const T*’ and ‘QChar’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:726:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const QWeakPointer<X>&)
 bool operator==(const QSharedPointer<T> &ptr1, const QWeakPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:726:6: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/qlocale.h:45:0,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qvariant.h:559:13: note: candidate: bool operator==(const QVariant&, const QVariantComparisonHelper&)
 inline bool operator==(const QVariant &v1, const QVariantComparisonHelper &v2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qvariant.h:559:13: note:   no known conversion for argument 2 from ‘const char [4]’ to ‘const QVariantComparisonHelper&’
In file included from /usr/include/qt4/QtCore/QtCore:22:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qmargins.h:121:13: note: candidate: bool operator==(const QMargins&, const QMargins&)
 inline bool operator==(const QMargins &m1, const QMargins &m2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qmargins.h:121:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QMargins&’
In file included from /usr/include/qt4/QtCore/QtCore:26:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qrect.h:496:13: note: candidate: bool operator==(const QRect&, const QRect&)
 inline bool operator==(const QRect &r1, const QRect &r2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qrect.h:496:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QRect&’
/usr/include/qt4/QtCore/qrect.h:833:13: note: candidate: bool operator==(const QRectF&, const QRectF&)
 inline bool operator==(const QRectF &r1, const QRectF &r2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qrect.h:833:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QRectF&’
In file included from /usr/include/qt4/QtCore/QtCore:41:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qvarlengtharray.h:383:6: note: candidate: template<class T, int Prealloc1, int Prealloc2> bool operator==(const QVarLengthArray<T, Prealloc1>&, const QVarLengthArray<T, Prealloc2>&)
 bool operator==(const QVarLengthArray<T, Prealloc1> &l, const QVarLengthArray<T, Prealloc2> &r)
      ^~~~~~~~
/usr/include/qt4/QtCore/qvarlengtharray.h:383:6: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const QVarLengthArray<T, Prealloc1>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:87:13: note: candidate: template<class T> bool operator==(const T*, const QPointer<T>&)
 inline bool operator==(const T *o, const QPointer<T> &p)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:87:13: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   mismatched types ‘const T*’ and ‘QChar’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:91:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, const T*)
 inline bool operator==(const QPointer<T> &p, const T *o)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:91:13: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:107:13: note: candidate: template<class T> bool operator==(T*, const QPointer<T>&)
 inline bool operator==(T *o, const QPointer<T> &p)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:107:13: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   mismatched types ‘T*’ and ‘QChar’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:111:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, T*)
 inline bool operator==(const QPointer<T> &p, T *o)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:111:13: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:115:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, const QPointer<T>&)
 inline bool operator==(const QPointer<T> &p1, const QPointer<T> &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:115:13: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/qt4/QtGui/qgraphicslayoutitem.h:47:0,
                 from /usr/include/qt4/QtGui/qgraphicslayout.h:45,
                 from /usr/include/qt4/QtGui/qgraphicsanchorlayout.h:46,
                 from /usr/include/qt4/QtGui/QtGui:4,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qevent.h:736:13: note: candidate: bool operator==(QKeyEvent*, QKeySequence::StandardKey)
 inline bool operator==(QKeyEvent *e, QKeySequence::StandardKey key){return (e ? e->matches(key) : false);}
             ^~~~~~~~
/usr/include/qt4/QtGui/qevent.h:736:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QKeyEvent*’
/usr/include/qt4/QtGui/qevent.h:737:13: note: candidate: bool operator==(QKeySequence::StandardKey, QKeyEvent*)
 inline bool operator==(QKeySequence::StandardKey key, QKeyEvent *e){return (e ? e->matches(key) : false);}
             ^~~~~~~~
/usr/include/qt4/QtGui/qevent.h:737:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QKeySequence::StandardKey’
In file included from /usr/include/qt4/QtGui/QVector3D:1:0,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:46,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector3d.h:209:13: note: candidate: bool operator==(const QVector3D&, const QVector3D&)
 inline bool operator==(const QVector3D &v1, const QVector3D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector3d.h:209:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector3D&’
In file included from /usr/include/qt4/QtGui/qmatrix4x4.h:46:0,
                 from /usr/include/qt4/QtGui/QMatrix4x4:1,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:48,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector4d.h:213:13: note: candidate: bool operator==(const QVector4D&, const QVector4D&)
 inline bool operator==(const QVector4D &v1, const QVector4D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector4d.h:213:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector4D&’
In file included from /usr/include/qt4/QtGui/qmatrix4x4.h:47:0,
                 from /usr/include/qt4/QtGui/QMatrix4x4:1,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:48,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qquaternion.h:229:13: note: candidate: bool operator==(const QQuaternion&, const QQuaternion&)
 inline bool operator==(const QQuaternion &q1, const QQuaternion &q2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qquaternion.h:229:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QQuaternion&’
In file included from /usr/include/qt4/QtGui/QtGui:219:0,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector2d.h:187:13: note: candidate: bool operator==(const QVector2D&, const QVector2D&)
 inline bool operator==(const QVector2D &v1, const QVector2D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector2d.h:187:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector2D&’
In file included from /usr/include/c++/7/vector:64:0,
                 from /usr/include/qt4/QtCore/qvector.h:52,
                 from /usr/include/qt4/QtCore/qstack.h:45,
                 from /usr/include/qt4/QtCore/QtCore:34,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_vector.h:1596:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator==(const std::vector<_Tp, _Alloc>&, const std::vector<_Tp, _Alloc>&)
     operator==(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_vector.h:1596:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::vector<_Tp, _Alloc>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/map:62:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_multimap.h:1061:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::multimap<_Key, _Tp, _Compare, _Alloc>&, const std::multimap<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_multimap.h:1061:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::multimap<_Key, _Tp, _Compare, _Alloc>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/map:61:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_map.h:1395:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::map<_Key, _Tp, _Compare, _Alloc>&, const std::map<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_map.h:1395:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::map<_Key, _Tp, _Compare, _Alloc>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/bits/stl_map.h:63:0,
                 from /usr/include/c++/7/map:61,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/tuple:1397:5: note: candidate: template<class ... _TElements, class ... _UElements> constexpr bool std::operator==(const std::tuple<_Tps ...>&, const std::tuple<_Args2 ...>&)
     operator==(const tuple<_TElements...>& __t,
     ^~~~~~~~
/usr/include/c++/7/tuple:1397:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::tuple<_Tps ...>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/tuple:39:0,
                 from /usr/include/c++/7/bits/stl_map.h:63,
                 from /usr/include/c++/7/map:61,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/array:252:5: note: candidate: template<class _Tp, long unsigned int _Nm> bool std::operator==(const std::array<_Tp, _Nm>&, const std::array<_Tp, _Nm>&)
     operator==(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
     ^~~~~~~~
/usr/include/c++/7/array:252:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::array<_Tp, _Nm>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_tree.h:1533:5: note: candidate: template<class _Key, class _Val, class _KeyOfValue, class _Compare, class _Alloc> bool std::operator==(const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&, const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&)
     operator==(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:1533:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_tree.h:406:5: note: candidate: template<class _Val> bool std::operator==(const std::_Rb_tree_iterator<_Tp>&, const std::_Rb_tree_const_iterator<_Val>&)
     operator==(const _Rb_tree_iterator<_Val>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:406:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::_Rb_tree_iterator<_Tp>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/list:63:0,
                 from /usr/include/qt4/QtCore/qlist.h:51,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_list.h:1884:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator==(const std::__cxx11::list<_Tp, _Alloc>&, const std::__cxx11::list<_Tp, _Alloc>&)
     operator==(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_list.h:1884:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::list<_Tp, _Alloc>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/list:63:0,
                 from /usr/include/qt4/QtCore/qlist.h:51,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_list.h:287:5: note: candidate: template<class _Val> bool std::operator==(const std::_List_iterator<_Tp>&, const std::_List_const_iterator<_Tp>&)
     operator==(const _List_iterator<_Val>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_list.h:287:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::_List_iterator<_Tp>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/iterator:66:0,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stream_iterator.h:130:5: note: candidate: template<class _Tp, class _CharT, class _Traits, class _Dist> bool std::operator==(const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&, const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&)
     operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stream_iterator.h:130:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/bits/locale_facets.h:48:0,
                 from /usr/include/c++/7/bits/basic_ios.h:37,
                 from /usr/include/c++/7/ios:44,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iterator:64,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note: candidate: template<class _CharT, class _Traits> bool std::operator==(const std::istreambuf_iterator<_CharT, _Traits>&, const std::istreambuf_iterator<_CharT, _Traits>&)
     operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
     ^~~~~~~~
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::istreambuf_iterator<_CharT, _Traits>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/bits/ios_base.h:46:0,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iterator:64,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/system_error:311:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_condition&)
   operator==(const error_condition& __lhs,
   ^~~~~~~~
/usr/include/c++/7/system_error:311:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_condition&’
/usr/include/c++/7/system_error:304:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_code&)
   operator==(const error_condition& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:304:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_condition&’
/usr/include/c++/7/system_error:297:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_condition&)
   operator==(const error_code& __lhs, const error_condition& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:297:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_code&’
/usr/include/c++/7/system_error:292:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_code&)
   operator==(const error_code& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:292:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_code&’
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6031:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const _CharT*)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6031:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6019:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const _CharT*, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const _CharT* __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6019:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   mismatched types ‘const _CharT*’ and ‘QChar’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6005:5: note: candidate: template<class _CharT> typename __gnu_cxx::__enable_if<std::__is_char<_Tp>::__value, bool>::__type std::operator==(const std::__cxx11::basic_string<_CharT>&, const std::__cxx11::basic_string<_CharT>&)
     operator==(const basic_string<_CharT>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6005:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:5997:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:5997:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/allocator.h:152:5: note: candidate: template<class _Tp> bool std::operator==(const std::allocator<_Tp>&, const std::allocator<_Tp>&)
     operator==(const allocator<_Tp>&, const allocator<_Tp>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:152:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::allocator<_Tp>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/allocator.h:146:5: note: candidate: template<class _T1, class _T2> bool std::operator==(const std::allocator<_Tp>&, const std::allocator<_Tp>&)
     operator==(const allocator<_T1>&, const allocator<_T2>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:146:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::allocator<_Tp>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/bits/char_traits.h:40:0,
                 from /usr/include/c++/7/string:40,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/postypes.h:216:5: note: candidate: template<class _StateT> bool std::operator==(const std::fpos<_StateT>&, const std::fpos<_StateT>&)
     operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
     ^~~~~~~~
/usr/include/c++/7/bits/postypes.h:216:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::fpos<_StateT>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:1124:5: note: candidate: template<class _Iterator> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorL>&)
     operator==(const move_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1124:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::move_iterator<_IteratorL>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:1118:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorR>&)
     operator==(const move_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1118:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::move_iterator<_IteratorL>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:337:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_IteratorR>&)
     operator==(const reverse_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:337:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::reverse_iterator<_Iterator>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:299:5: note: candidate: template<class _Iterator> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_Iterator>&)
     operator==(const reverse_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:299:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::reverse_iterator<_Iterator>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
In file included from /usr/include/c++/7/utility:70:0,
                 from /usr/include/c++/7/algorithm:60,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_pair.h:443:5: note: candidate: template<class _T1, class _T2> constexpr bool std::operator==(const std::pair<_T1, _T2>&, const std::pair<_T1, _T2>&)
     operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_pair.h:443:5: note:   template argument deduction/substitution failed:
main.cpp:30:33: note:   ‘const QChar’ is not derived from ‘const std::pair<_T1, _T2>’
         if (cmdlinearg.at(i) == "put")
                                 ^~~~~
main.cpp:33:35: error: no match for ‘operator==’ (operand types are ‘const QChar’ and ‘const char [4]’)
         else if (cmdlinearg.at(i) == "get")
                  ~~~~~~~~~~~~~~~~~^~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:392:13: note: candidate: bool operator==(QChar, QChar) <near match>
 inline bool operator==(QChar c1, QChar c2) { return c1.unicode() == c2.unicode(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qchar.h:392:13: note:   conversion of argument 2 would be ill-formed:
main.cpp:33:38: error: conversion from ‘const char [4]’ to ‘QChar’ is ambiguous
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:383:8: note: candidate: QChar::QChar(int) <near match>
 inline QChar::QChar(int rc) : ucs(ushort(rc & 0xffff)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:383:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:33:38: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:382:8: note: candidate: QChar::QChar(uint) <near match>
 inline QChar::QChar(uint rc) : ucs(ushort(rc & 0xffff)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:382:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:33:38: error: invalid conversion from ‘const char*’ to ‘uint {aka unsigned int}’ [-fpermissive]
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:381:8: note: candidate: QChar::QChar(short int) <near match>
 inline QChar::QChar(short rc) : ucs(ushort(rc)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:381:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:33:38: error: invalid conversion from ‘const char*’ to ‘short int’ [-fpermissive]
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:81:12: note: candidate: QChar::QChar(ushort) <near match>
     inline QChar(ushort rc) : ucs(rc){}
            ^~~~~
/usr/include/qt4/QtCore/qchar.h:81:12: note:   conversion of argument 1 would be ill-formed:
main.cpp:33:38: error: invalid conversion from ‘const char*’ to ‘ushort {aka short unsigned int}’ [-fpermissive]
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:77:36: note: candidate: QChar::QChar(uchar) <near match>
     QT_ASCII_CAST_WARN_CONSTRUCTOR QChar(uchar c);
                                    ^~~~~
/usr/include/qt4/QtCore/qchar.h:77:36: note:   conversion of argument 1 would be ill-formed:
main.cpp:33:38: error: invalid conversion from ‘const char*’ to ‘uchar {aka unsigned char}’ [-fpermissive]
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:76:36: note: candidate: QChar::QChar(char) <near match>
     QT_ASCII_CAST_WARN_CONSTRUCTOR QChar(char c);
                                    ^~~~~
/usr/include/qt4/QtCore/qchar.h:76:36: note:   conversion of argument 1 would be ill-formed:
main.cpp:33:38: error: invalid conversion from ‘const char*’ to ‘char’ [-fpermissive]
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qnamespace.h:45:0,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qglobal.h:2140:13: note: candidate: bool operator==(QBool, bool)
 inline bool operator==(QBool b1, bool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2140:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QBool’
/usr/include/qt4/QtCore/qglobal.h:2141:13: note: candidate: bool operator==(bool, QBool)
 inline bool operator==(bool b1, QBool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2141:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘bool’
/usr/include/qt4/QtCore/qglobal.h:2142:13: note: candidate: bool operator==(QBool, QBool)
 inline bool operator==(QBool b1, QBool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2142:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QBool’
In file included from /usr/include/qt4/QtCore/qstring.h:46:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qbytearray.h:527:13: note: candidate: bool operator==(const QByteArray&, const QByteArray&)
 inline bool operator==(const QByteArray &a1, const QByteArray &a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:527:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QByteArray&’
/usr/include/qt4/QtCore/qbytearray.h:529:13: note: candidate: bool operator==(const QByteArray&, const char*)
 inline bool operator==(const QByteArray &a1, const char *a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:529:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QByteArray&’
/usr/include/qt4/QtCore/qbytearray.h:531:13: note: candidate: bool operator==(const char*, const QByteArray&)
 inline bool operator==(const char *a1, const QByteArray &a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:531:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
In file included from /usr/include/qt4/QtCore/qobject.h:48:0,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qstring.h:908:13: note: candidate: bool operator==(QString::Null, QString::Null)
 inline bool operator==(QString::Null, QString::Null) { return true; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:908:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:909:13: note: candidate: bool operator==(QString::Null, const QString&)
 inline bool operator==(QString::Null, const QString &s) { return s.isNull(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:909:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:910:13: note: candidate: bool operator==(const QString&, QString::Null)
 inline bool operator==(const QString &s, QString::Null) { return s.isNull(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:910:13: note:   no known conversion for argument 2 from ‘const char [4]’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:936:32: note: candidate: bool operator==(const char*, const QString&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QString &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:936:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:949:32: note: candidate: bool operator==(const char*, const QLatin1String&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QLatin1String &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:949:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:962:13: note: candidate: bool operator==(const QLatin1String&, const QLatin1String&)
 inline bool operator==(const QLatin1String &s1, const QLatin1String &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:962:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QLatin1String&’
/usr/include/qt4/QtCore/qstring.h:1202:20: note: candidate: bool operator==(const QStringRef&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QStringRef &s1,const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1202:20: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1205:20: note: candidate: bool operator==(const QString&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QString &s1,const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1205:20: note:   no known conversion for argument 2 from ‘const char [4]’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1208:13: note: candidate: bool operator==(const QStringRef&, const QString&)
 inline bool operator==(const QStringRef &s1,const QString &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1208:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1212:20: note: candidate: bool operator==(const QLatin1String&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QLatin1String &s1, const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1212:20: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QLatin1String&’
/usr/include/qt4/QtCore/qstring.h:1215:13: note: candidate: bool operator==(const QStringRef&, const QLatin1String&)
 inline bool operator==(const QStringRef &s1,const QLatin1String &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1215:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1236:32: note: candidate: bool operator==(const char*, const QStringRef&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QStringRef &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1236:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:1238:32: note: candidate: bool operator==(const QStringRef&, const char*)
 inline QT_ASCII_CAST_WARN bool operator==(const QStringRef &s1, const char *s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1238:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
In file included from /usr/include/qt4/QtCore/qobject.h:54:0,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qscopedpointer.h:174:13: note: candidate: template<class T, class Cleanup> bool operator==(const QScopedPointer<T, Cleanup>&, const QScopedPointer<T, Cleanup>&)
 inline bool operator==(const QScopedPointer<T, Cleanup> &lhs, const QScopedPointer<T, Cleanup> &rhs)
             ^~~~~~~~
/usr/include/qt4/QtCore/qscopedpointer.h:174:13: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const QScopedPointer<T, Cleanup>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtGui/qapplication.h:47:0,
                 from ../../lib/include/ext_udp.h:4,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpoint.h:161:13: note: candidate: bool operator==(const QPoint&, const QPoint&)
 inline bool operator==(const QPoint &p1, const QPoint &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpoint.h:161:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QPoint&’
/usr/include/qt4/QtCore/qpoint.h:329:13: note: candidate: bool operator==(const QPointF&, const QPointF&)
 inline bool operator==(const QPointF &p1, const QPointF &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpoint.h:329:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QPointF&’
In file included from /usr/include/qt4/QtGui/qapplication.h:48:0,
                 from ../../lib/include/ext_udp.h:4,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsize.h:156:13: note: candidate: bool operator==(const QSize&, const QSize&)
 inline bool operator==(const QSize &s1, const QSize &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qsize.h:156:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QSize&’
/usr/include/qt4/QtCore/qsize.h:314:13: note: candidate: bool operator==(const QSizeF&, const QSizeF&)
 inline bool operator==(const QSizeF &s1, const QSizeF &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qsize.h:314:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QSizeF&’
In file included from /usr/include/qt4/QtCore/qhash.h:49:0,
                 from /usr/include/qt4/QtCore/qcache.h:45,
                 from /usr/include/qt4/QtCore/QtCore:7,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpair.h:70:24: note: candidate: template<class T1, class T2> bool operator==(const QPair<T1, T2>&, const QPair<T1, T2>&)
 Q_INLINE_TEMPLATE bool operator==(const QPair<T1, T2> &p1, const QPair<T1, T2> &p2)
                        ^~~~~~~~
/usr/include/qt4/QtCore/qpair.h:70:24: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const QPair<T1, T2>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qcache.h:45:0,
                 from /usr/include/qt4/QtCore/QtCore:7,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qhash.h:198:13: note: candidate: bool operator==(const QHashDummyValue&, const QHashDummyValue&)
 inline bool operator==(const QHashDummyValue & /* v1 */, const QHashDummyValue & /* v2 */)
             ^~~~~~~~
/usr/include/qt4/QtCore/qhash.h:198:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QHashDummyValue&’
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:694:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const QSharedPointer<T>&)
 bool operator==(const QSharedPointer<T> &ptr1, const QSharedPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:694:6: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:705:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const X*)
 bool operator==(const QSharedPointer<T> &ptr1, const X *ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:705:6: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:710:6: note: candidate: template<class T, class X> bool operator==(const T*, const QSharedPointer<T>&)
 bool operator==(const T *ptr1, const QSharedPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:710:6: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   mismatched types ‘const T*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:726:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const QWeakPointer<X>&)
 bool operator==(const QSharedPointer<T> &ptr1, const QWeakPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:726:6: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qlocale.h:45:0,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qvariant.h:559:13: note: candidate: bool operator==(const QVariant&, const QVariantComparisonHelper&)
 inline bool operator==(const QVariant &v1, const QVariantComparisonHelper &v2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qvariant.h:559:13: note:   no known conversion for argument 2 from ‘const char [4]’ to ‘const QVariantComparisonHelper&’
In file included from /usr/include/qt4/QtCore/QtCore:22:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qmargins.h:121:13: note: candidate: bool operator==(const QMargins&, const QMargins&)
 inline bool operator==(const QMargins &m1, const QMargins &m2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qmargins.h:121:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QMargins&’
In file included from /usr/include/qt4/QtCore/QtCore:26:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qrect.h:496:13: note: candidate: bool operator==(const QRect&, const QRect&)
 inline bool operator==(const QRect &r1, const QRect &r2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qrect.h:496:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QRect&’
/usr/include/qt4/QtCore/qrect.h:833:13: note: candidate: bool operator==(const QRectF&, const QRectF&)
 inline bool operator==(const QRectF &r1, const QRectF &r2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qrect.h:833:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QRectF&’
In file included from /usr/include/qt4/QtCore/QtCore:41:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qvarlengtharray.h:383:6: note: candidate: template<class T, int Prealloc1, int Prealloc2> bool operator==(const QVarLengthArray<T, Prealloc1>&, const QVarLengthArray<T, Prealloc2>&)
 bool operator==(const QVarLengthArray<T, Prealloc1> &l, const QVarLengthArray<T, Prealloc2> &r)
      ^~~~~~~~
/usr/include/qt4/QtCore/qvarlengtharray.h:383:6: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const QVarLengthArray<T, Prealloc1>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:87:13: note: candidate: template<class T> bool operator==(const T*, const QPointer<T>&)
 inline bool operator==(const T *o, const QPointer<T> &p)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:87:13: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   mismatched types ‘const T*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:91:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, const T*)
 inline bool operator==(const QPointer<T> &p, const T *o)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:91:13: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:107:13: note: candidate: template<class T> bool operator==(T*, const QPointer<T>&)
 inline bool operator==(T *o, const QPointer<T> &p)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:107:13: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   mismatched types ‘T*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:111:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, T*)
 inline bool operator==(const QPointer<T> &p, T *o)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:111:13: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:115:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, const QPointer<T>&)
 inline bool operator==(const QPointer<T> &p1, const QPointer<T> &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:115:13: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/qt4/QtGui/qgraphicslayoutitem.h:47:0,
                 from /usr/include/qt4/QtGui/qgraphicslayout.h:45,
                 from /usr/include/qt4/QtGui/qgraphicsanchorlayout.h:46,
                 from /usr/include/qt4/QtGui/QtGui:4,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qevent.h:736:13: note: candidate: bool operator==(QKeyEvent*, QKeySequence::StandardKey)
 inline bool operator==(QKeyEvent *e, QKeySequence::StandardKey key){return (e ? e->matches(key) : false);}
             ^~~~~~~~
/usr/include/qt4/QtGui/qevent.h:736:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QKeyEvent*’
/usr/include/qt4/QtGui/qevent.h:737:13: note: candidate: bool operator==(QKeySequence::StandardKey, QKeyEvent*)
 inline bool operator==(QKeySequence::StandardKey key, QKeyEvent *e){return (e ? e->matches(key) : false);}
             ^~~~~~~~
/usr/include/qt4/QtGui/qevent.h:737:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QKeySequence::StandardKey’
In file included from /usr/include/qt4/QtGui/QVector3D:1:0,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:46,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector3d.h:209:13: note: candidate: bool operator==(const QVector3D&, const QVector3D&)
 inline bool operator==(const QVector3D &v1, const QVector3D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector3d.h:209:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector3D&’
In file included from /usr/include/qt4/QtGui/qmatrix4x4.h:46:0,
                 from /usr/include/qt4/QtGui/QMatrix4x4:1,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:48,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector4d.h:213:13: note: candidate: bool operator==(const QVector4D&, const QVector4D&)
 inline bool operator==(const QVector4D &v1, const QVector4D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector4d.h:213:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector4D&’
In file included from /usr/include/qt4/QtGui/qmatrix4x4.h:47:0,
                 from /usr/include/qt4/QtGui/QMatrix4x4:1,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:48,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qquaternion.h:229:13: note: candidate: bool operator==(const QQuaternion&, const QQuaternion&)
 inline bool operator==(const QQuaternion &q1, const QQuaternion &q2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qquaternion.h:229:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QQuaternion&’
In file included from /usr/include/qt4/QtGui/QtGui:219:0,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector2d.h:187:13: note: candidate: bool operator==(const QVector2D&, const QVector2D&)
 inline bool operator==(const QVector2D &v1, const QVector2D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector2d.h:187:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector2D&’
In file included from /usr/include/c++/7/vector:64:0,
                 from /usr/include/qt4/QtCore/qvector.h:52,
                 from /usr/include/qt4/QtCore/qstack.h:45,
                 from /usr/include/qt4/QtCore/QtCore:34,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_vector.h:1596:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator==(const std::vector<_Tp, _Alloc>&, const std::vector<_Tp, _Alloc>&)
     operator==(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_vector.h:1596:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::vector<_Tp, _Alloc>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/map:62:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_multimap.h:1061:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::multimap<_Key, _Tp, _Compare, _Alloc>&, const std::multimap<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_multimap.h:1061:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::multimap<_Key, _Tp, _Compare, _Alloc>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/map:61:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_map.h:1395:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::map<_Key, _Tp, _Compare, _Alloc>&, const std::map<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_map.h:1395:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::map<_Key, _Tp, _Compare, _Alloc>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_map.h:63:0,
                 from /usr/include/c++/7/map:61,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/tuple:1397:5: note: candidate: template<class ... _TElements, class ... _UElements> constexpr bool std::operator==(const std::tuple<_Tps ...>&, const std::tuple<_Args2 ...>&)
     operator==(const tuple<_TElements...>& __t,
     ^~~~~~~~
/usr/include/c++/7/tuple:1397:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::tuple<_Tps ...>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/tuple:39:0,
                 from /usr/include/c++/7/bits/stl_map.h:63,
                 from /usr/include/c++/7/map:61,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/array:252:5: note: candidate: template<class _Tp, long unsigned int _Nm> bool std::operator==(const std::array<_Tp, _Nm>&, const std::array<_Tp, _Nm>&)
     operator==(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
     ^~~~~~~~
/usr/include/c++/7/array:252:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::array<_Tp, _Nm>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_tree.h:1533:5: note: candidate: template<class _Key, class _Val, class _KeyOfValue, class _Compare, class _Alloc> bool std::operator==(const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&, const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&)
     operator==(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:1533:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_tree.h:406:5: note: candidate: template<class _Val> bool std::operator==(const std::_Rb_tree_iterator<_Tp>&, const std::_Rb_tree_const_iterator<_Val>&)
     operator==(const _Rb_tree_iterator<_Val>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:406:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::_Rb_tree_iterator<_Tp>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/list:63:0,
                 from /usr/include/qt4/QtCore/qlist.h:51,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_list.h:1884:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator==(const std::__cxx11::list<_Tp, _Alloc>&, const std::__cxx11::list<_Tp, _Alloc>&)
     operator==(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_list.h:1884:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::list<_Tp, _Alloc>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/list:63:0,
                 from /usr/include/qt4/QtCore/qlist.h:51,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_list.h:287:5: note: candidate: template<class _Val> bool std::operator==(const std::_List_iterator<_Tp>&, const std::_List_const_iterator<_Tp>&)
     operator==(const _List_iterator<_Val>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_list.h:287:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::_List_iterator<_Tp>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/iterator:66:0,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stream_iterator.h:130:5: note: candidate: template<class _Tp, class _CharT, class _Traits, class _Dist> bool std::operator==(const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&, const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&)
     operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stream_iterator.h:130:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/locale_facets.h:48:0,
                 from /usr/include/c++/7/bits/basic_ios.h:37,
                 from /usr/include/c++/7/ios:44,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iterator:64,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note: candidate: template<class _CharT, class _Traits> bool std::operator==(const std::istreambuf_iterator<_CharT, _Traits>&, const std::istreambuf_iterator<_CharT, _Traits>&)
     operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
     ^~~~~~~~
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::istreambuf_iterator<_CharT, _Traits>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/ios_base.h:46:0,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iterator:64,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/system_error:311:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_condition&)
   operator==(const error_condition& __lhs,
   ^~~~~~~~
/usr/include/c++/7/system_error:311:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_condition&’
/usr/include/c++/7/system_error:304:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_code&)
   operator==(const error_condition& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:304:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_condition&’
/usr/include/c++/7/system_error:297:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_condition&)
   operator==(const error_code& __lhs, const error_condition& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:297:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_code&’
/usr/include/c++/7/system_error:292:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_code&)
   operator==(const error_code& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:292:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_code&’
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6031:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const _CharT*)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6031:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6019:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const _CharT*, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const _CharT* __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6019:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   mismatched types ‘const _CharT*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6005:5: note: candidate: template<class _CharT> typename __gnu_cxx::__enable_if<std::__is_char<_Tp>::__value, bool>::__type std::operator==(const std::__cxx11::basic_string<_CharT>&, const std::__cxx11::basic_string<_CharT>&)
     operator==(const basic_string<_CharT>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6005:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:5997:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:5997:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/allocator.h:152:5: note: candidate: template<class _Tp> bool std::operator==(const std::allocator<_Tp>&, const std::allocator<_Tp>&)
     operator==(const allocator<_Tp>&, const allocator<_Tp>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:152:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::allocator<_Tp>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/allocator.h:146:5: note: candidate: template<class _T1, class _T2> bool std::operator==(const std::allocator<_Tp>&, const std::allocator<_Tp>&)
     operator==(const allocator<_T1>&, const allocator<_T2>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:146:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::allocator<_Tp>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/char_traits.h:40:0,
                 from /usr/include/c++/7/string:40,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/postypes.h:216:5: note: candidate: template<class _StateT> bool std::operator==(const std::fpos<_StateT>&, const std::fpos<_StateT>&)
     operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
     ^~~~~~~~
/usr/include/c++/7/bits/postypes.h:216:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::fpos<_StateT>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:1124:5: note: candidate: template<class _Iterator> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorL>&)
     operator==(const move_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1124:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::move_iterator<_IteratorL>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:1118:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorR>&)
     operator==(const move_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1118:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::move_iterator<_IteratorL>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:337:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_IteratorR>&)
     operator==(const reverse_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:337:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::reverse_iterator<_Iterator>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:299:5: note: candidate: template<class _Iterator> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_Iterator>&)
     operator==(const reverse_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:299:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::reverse_iterator<_Iterator>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
In file included from /usr/include/c++/7/utility:70:0,
                 from /usr/include/c++/7/algorithm:60,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_pair.h:443:5: note: candidate: template<class _T1, class _T2> constexpr bool std::operator==(const std::pair<_T1, _T2>&, const std::pair<_T1, _T2>&)
     operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_pair.h:443:5: note:   template argument deduction/substitution failed:
main.cpp:33:38: note:   ‘const QChar’ is not derived from ‘const std::pair<_T1, _T2>’
         else if (cmdlinearg.at(i) == "get")
                                      ^~~~~
main.cpp:36:35: error: no match for ‘operator==’ (operand types are ‘const QChar’ and ‘const char [4]’)
         else if (cmdlinearg.at(i) == "run")
                  ~~~~~~~~~~~~~~~~~^~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:392:13: note: candidate: bool operator==(QChar, QChar) <near match>
 inline bool operator==(QChar c1, QChar c2) { return c1.unicode() == c2.unicode(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qchar.h:392:13: note:   conversion of argument 2 would be ill-formed:
main.cpp:36:38: error: conversion from ‘const char [4]’ to ‘QChar’ is ambiguous
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:383:8: note: candidate: QChar::QChar(int) <near match>
 inline QChar::QChar(int rc) : ucs(ushort(rc & 0xffff)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:383:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:36:38: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:382:8: note: candidate: QChar::QChar(uint) <near match>
 inline QChar::QChar(uint rc) : ucs(ushort(rc & 0xffff)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:382:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:36:38: error: invalid conversion from ‘const char*’ to ‘uint {aka unsigned int}’ [-fpermissive]
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:381:8: note: candidate: QChar::QChar(short int) <near match>
 inline QChar::QChar(short rc) : ucs(ushort(rc)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:381:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:36:38: error: invalid conversion from ‘const char*’ to ‘short int’ [-fpermissive]
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:81:12: note: candidate: QChar::QChar(ushort) <near match>
     inline QChar(ushort rc) : ucs(rc){}
            ^~~~~
/usr/include/qt4/QtCore/qchar.h:81:12: note:   conversion of argument 1 would be ill-formed:
main.cpp:36:38: error: invalid conversion from ‘const char*’ to ‘ushort {aka short unsigned int}’ [-fpermissive]
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:77:36: note: candidate: QChar::QChar(uchar) <near match>
     QT_ASCII_CAST_WARN_CONSTRUCTOR QChar(uchar c);
                                    ^~~~~
/usr/include/qt4/QtCore/qchar.h:77:36: note:   conversion of argument 1 would be ill-formed:
main.cpp:36:38: error: invalid conversion from ‘const char*’ to ‘uchar {aka unsigned char}’ [-fpermissive]
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:76:36: note: candidate: QChar::QChar(char) <near match>
     QT_ASCII_CAST_WARN_CONSTRUCTOR QChar(char c);
                                    ^~~~~
/usr/include/qt4/QtCore/qchar.h:76:36: note:   conversion of argument 1 would be ill-formed:
main.cpp:36:38: error: invalid conversion from ‘const char*’ to ‘char’ [-fpermissive]
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qnamespace.h:45:0,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qglobal.h:2140:13: note: candidate: bool operator==(QBool, bool)
 inline bool operator==(QBool b1, bool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2140:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QBool’
/usr/include/qt4/QtCore/qglobal.h:2141:13: note: candidate: bool operator==(bool, QBool)
 inline bool operator==(bool b1, QBool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2141:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘bool’
/usr/include/qt4/QtCore/qglobal.h:2142:13: note: candidate: bool operator==(QBool, QBool)
 inline bool operator==(QBool b1, QBool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2142:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QBool’
In file included from /usr/include/qt4/QtCore/qstring.h:46:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qbytearray.h:527:13: note: candidate: bool operator==(const QByteArray&, const QByteArray&)
 inline bool operator==(const QByteArray &a1, const QByteArray &a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:527:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QByteArray&’
/usr/include/qt4/QtCore/qbytearray.h:529:13: note: candidate: bool operator==(const QByteArray&, const char*)
 inline bool operator==(const QByteArray &a1, const char *a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:529:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QByteArray&’
/usr/include/qt4/QtCore/qbytearray.h:531:13: note: candidate: bool operator==(const char*, const QByteArray&)
 inline bool operator==(const char *a1, const QByteArray &a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:531:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
In file included from /usr/include/qt4/QtCore/qobject.h:48:0,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qstring.h:908:13: note: candidate: bool operator==(QString::Null, QString::Null)
 inline bool operator==(QString::Null, QString::Null) { return true; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:908:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:909:13: note: candidate: bool operator==(QString::Null, const QString&)
 inline bool operator==(QString::Null, const QString &s) { return s.isNull(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:909:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:910:13: note: candidate: bool operator==(const QString&, QString::Null)
 inline bool operator==(const QString &s, QString::Null) { return s.isNull(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:910:13: note:   no known conversion for argument 2 from ‘const char [4]’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:936:32: note: candidate: bool operator==(const char*, const QString&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QString &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:936:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:949:32: note: candidate: bool operator==(const char*, const QLatin1String&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QLatin1String &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:949:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:962:13: note: candidate: bool operator==(const QLatin1String&, const QLatin1String&)
 inline bool operator==(const QLatin1String &s1, const QLatin1String &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:962:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QLatin1String&’
/usr/include/qt4/QtCore/qstring.h:1202:20: note: candidate: bool operator==(const QStringRef&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QStringRef &s1,const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1202:20: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1205:20: note: candidate: bool operator==(const QString&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QString &s1,const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1205:20: note:   no known conversion for argument 2 from ‘const char [4]’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1208:13: note: candidate: bool operator==(const QStringRef&, const QString&)
 inline bool operator==(const QStringRef &s1,const QString &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1208:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1212:20: note: candidate: bool operator==(const QLatin1String&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QLatin1String &s1, const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1212:20: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QLatin1String&’
/usr/include/qt4/QtCore/qstring.h:1215:13: note: candidate: bool operator==(const QStringRef&, const QLatin1String&)
 inline bool operator==(const QStringRef &s1,const QLatin1String &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1215:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1236:32: note: candidate: bool operator==(const char*, const QStringRef&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QStringRef &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1236:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:1238:32: note: candidate: bool operator==(const QStringRef&, const char*)
 inline QT_ASCII_CAST_WARN bool operator==(const QStringRef &s1, const char *s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1238:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
In file included from /usr/include/qt4/QtCore/qobject.h:54:0,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qscopedpointer.h:174:13: note: candidate: template<class T, class Cleanup> bool operator==(const QScopedPointer<T, Cleanup>&, const QScopedPointer<T, Cleanup>&)
 inline bool operator==(const QScopedPointer<T, Cleanup> &lhs, const QScopedPointer<T, Cleanup> &rhs)
             ^~~~~~~~
/usr/include/qt4/QtCore/qscopedpointer.h:174:13: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const QScopedPointer<T, Cleanup>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtGui/qapplication.h:47:0,
                 from ../../lib/include/ext_udp.h:4,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpoint.h:161:13: note: candidate: bool operator==(const QPoint&, const QPoint&)
 inline bool operator==(const QPoint &p1, const QPoint &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpoint.h:161:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QPoint&’
/usr/include/qt4/QtCore/qpoint.h:329:13: note: candidate: bool operator==(const QPointF&, const QPointF&)
 inline bool operator==(const QPointF &p1, const QPointF &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpoint.h:329:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QPointF&’
In file included from /usr/include/qt4/QtGui/qapplication.h:48:0,
                 from ../../lib/include/ext_udp.h:4,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsize.h:156:13: note: candidate: bool operator==(const QSize&, const QSize&)
 inline bool operator==(const QSize &s1, const QSize &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qsize.h:156:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QSize&’
/usr/include/qt4/QtCore/qsize.h:314:13: note: candidate: bool operator==(const QSizeF&, const QSizeF&)
 inline bool operator==(const QSizeF &s1, const QSizeF &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qsize.h:314:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QSizeF&’
In file included from /usr/include/qt4/QtCore/qhash.h:49:0,
                 from /usr/include/qt4/QtCore/qcache.h:45,
                 from /usr/include/qt4/QtCore/QtCore:7,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpair.h:70:24: note: candidate: template<class T1, class T2> bool operator==(const QPair<T1, T2>&, const QPair<T1, T2>&)
 Q_INLINE_TEMPLATE bool operator==(const QPair<T1, T2> &p1, const QPair<T1, T2> &p2)
                        ^~~~~~~~
/usr/include/qt4/QtCore/qpair.h:70:24: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const QPair<T1, T2>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qcache.h:45:0,
                 from /usr/include/qt4/QtCore/QtCore:7,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qhash.h:198:13: note: candidate: bool operator==(const QHashDummyValue&, const QHashDummyValue&)
 inline bool operator==(const QHashDummyValue & /* v1 */, const QHashDummyValue & /* v2 */)
             ^~~~~~~~
/usr/include/qt4/QtCore/qhash.h:198:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QHashDummyValue&’
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:694:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const QSharedPointer<T>&)
 bool operator==(const QSharedPointer<T> &ptr1, const QSharedPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:694:6: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:705:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const X*)
 bool operator==(const QSharedPointer<T> &ptr1, const X *ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:705:6: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:710:6: note: candidate: template<class T, class X> bool operator==(const T*, const QSharedPointer<T>&)
 bool operator==(const T *ptr1, const QSharedPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:710:6: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   mismatched types ‘const T*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:726:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const QWeakPointer<X>&)
 bool operator==(const QSharedPointer<T> &ptr1, const QWeakPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:726:6: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/qlocale.h:45:0,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qvariant.h:559:13: note: candidate: bool operator==(const QVariant&, const QVariantComparisonHelper&)
 inline bool operator==(const QVariant &v1, const QVariantComparisonHelper &v2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qvariant.h:559:13: note:   no known conversion for argument 2 from ‘const char [4]’ to ‘const QVariantComparisonHelper&’
In file included from /usr/include/qt4/QtCore/QtCore:22:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qmargins.h:121:13: note: candidate: bool operator==(const QMargins&, const QMargins&)
 inline bool operator==(const QMargins &m1, const QMargins &m2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qmargins.h:121:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QMargins&’
In file included from /usr/include/qt4/QtCore/QtCore:26:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qrect.h:496:13: note: candidate: bool operator==(const QRect&, const QRect&)
 inline bool operator==(const QRect &r1, const QRect &r2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qrect.h:496:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QRect&’
/usr/include/qt4/QtCore/qrect.h:833:13: note: candidate: bool operator==(const QRectF&, const QRectF&)
 inline bool operator==(const QRectF &r1, const QRectF &r2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qrect.h:833:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QRectF&’
In file included from /usr/include/qt4/QtCore/QtCore:41:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qvarlengtharray.h:383:6: note: candidate: template<class T, int Prealloc1, int Prealloc2> bool operator==(const QVarLengthArray<T, Prealloc1>&, const QVarLengthArray<T, Prealloc2>&)
 bool operator==(const QVarLengthArray<T, Prealloc1> &l, const QVarLengthArray<T, Prealloc2> &r)
      ^~~~~~~~
/usr/include/qt4/QtCore/qvarlengtharray.h:383:6: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const QVarLengthArray<T, Prealloc1>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:87:13: note: candidate: template<class T> bool operator==(const T*, const QPointer<T>&)
 inline bool operator==(const T *o, const QPointer<T> &p)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:87:13: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   mismatched types ‘const T*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:91:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, const T*)
 inline bool operator==(const QPointer<T> &p, const T *o)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:91:13: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:107:13: note: candidate: template<class T> bool operator==(T*, const QPointer<T>&)
 inline bool operator==(T *o, const QPointer<T> &p)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:107:13: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   mismatched types ‘T*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:111:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, T*)
 inline bool operator==(const QPointer<T> &p, T *o)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:111:13: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:115:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, const QPointer<T>&)
 inline bool operator==(const QPointer<T> &p1, const QPointer<T> &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:115:13: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/qt4/QtGui/qgraphicslayoutitem.h:47:0,
                 from /usr/include/qt4/QtGui/qgraphicslayout.h:45,
                 from /usr/include/qt4/QtGui/qgraphicsanchorlayout.h:46,
                 from /usr/include/qt4/QtGui/QtGui:4,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qevent.h:736:13: note: candidate: bool operator==(QKeyEvent*, QKeySequence::StandardKey)
 inline bool operator==(QKeyEvent *e, QKeySequence::StandardKey key){return (e ? e->matches(key) : false);}
             ^~~~~~~~
/usr/include/qt4/QtGui/qevent.h:736:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QKeyEvent*’
/usr/include/qt4/QtGui/qevent.h:737:13: note: candidate: bool operator==(QKeySequence::StandardKey, QKeyEvent*)
 inline bool operator==(QKeySequence::StandardKey key, QKeyEvent *e){return (e ? e->matches(key) : false);}
             ^~~~~~~~
/usr/include/qt4/QtGui/qevent.h:737:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QKeySequence::StandardKey’
In file included from /usr/include/qt4/QtGui/QVector3D:1:0,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:46,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector3d.h:209:13: note: candidate: bool operator==(const QVector3D&, const QVector3D&)
 inline bool operator==(const QVector3D &v1, const QVector3D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector3d.h:209:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector3D&’
In file included from /usr/include/qt4/QtGui/qmatrix4x4.h:46:0,
                 from /usr/include/qt4/QtGui/QMatrix4x4:1,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:48,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector4d.h:213:13: note: candidate: bool operator==(const QVector4D&, const QVector4D&)
 inline bool operator==(const QVector4D &v1, const QVector4D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector4d.h:213:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector4D&’
In file included from /usr/include/qt4/QtGui/qmatrix4x4.h:47:0,
                 from /usr/include/qt4/QtGui/QMatrix4x4:1,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:48,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qquaternion.h:229:13: note: candidate: bool operator==(const QQuaternion&, const QQuaternion&)
 inline bool operator==(const QQuaternion &q1, const QQuaternion &q2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qquaternion.h:229:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QQuaternion&’
In file included from /usr/include/qt4/QtGui/QtGui:219:0,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector2d.h:187:13: note: candidate: bool operator==(const QVector2D&, const QVector2D&)
 inline bool operator==(const QVector2D &v1, const QVector2D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector2d.h:187:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector2D&’
In file included from /usr/include/c++/7/vector:64:0,
                 from /usr/include/qt4/QtCore/qvector.h:52,
                 from /usr/include/qt4/QtCore/qstack.h:45,
                 from /usr/include/qt4/QtCore/QtCore:34,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_vector.h:1596:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator==(const std::vector<_Tp, _Alloc>&, const std::vector<_Tp, _Alloc>&)
     operator==(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_vector.h:1596:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::vector<_Tp, _Alloc>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/map:62:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_multimap.h:1061:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::multimap<_Key, _Tp, _Compare, _Alloc>&, const std::multimap<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_multimap.h:1061:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::multimap<_Key, _Tp, _Compare, _Alloc>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/map:61:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_map.h:1395:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::map<_Key, _Tp, _Compare, _Alloc>&, const std::map<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_map.h:1395:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::map<_Key, _Tp, _Compare, _Alloc>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_map.h:63:0,
                 from /usr/include/c++/7/map:61,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/tuple:1397:5: note: candidate: template<class ... _TElements, class ... _UElements> constexpr bool std::operator==(const std::tuple<_Tps ...>&, const std::tuple<_Args2 ...>&)
     operator==(const tuple<_TElements...>& __t,
     ^~~~~~~~
/usr/include/c++/7/tuple:1397:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::tuple<_Tps ...>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/tuple:39:0,
                 from /usr/include/c++/7/bits/stl_map.h:63,
                 from /usr/include/c++/7/map:61,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/array:252:5: note: candidate: template<class _Tp, long unsigned int _Nm> bool std::operator==(const std::array<_Tp, _Nm>&, const std::array<_Tp, _Nm>&)
     operator==(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
     ^~~~~~~~
/usr/include/c++/7/array:252:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::array<_Tp, _Nm>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_tree.h:1533:5: note: candidate: template<class _Key, class _Val, class _KeyOfValue, class _Compare, class _Alloc> bool std::operator==(const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&, const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&)
     operator==(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:1533:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_tree.h:406:5: note: candidate: template<class _Val> bool std::operator==(const std::_Rb_tree_iterator<_Tp>&, const std::_Rb_tree_const_iterator<_Val>&)
     operator==(const _Rb_tree_iterator<_Val>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:406:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::_Rb_tree_iterator<_Tp>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/list:63:0,
                 from /usr/include/qt4/QtCore/qlist.h:51,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_list.h:1884:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator==(const std::__cxx11::list<_Tp, _Alloc>&, const std::__cxx11::list<_Tp, _Alloc>&)
     operator==(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_list.h:1884:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::list<_Tp, _Alloc>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/list:63:0,
                 from /usr/include/qt4/QtCore/qlist.h:51,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_list.h:287:5: note: candidate: template<class _Val> bool std::operator==(const std::_List_iterator<_Tp>&, const std::_List_const_iterator<_Tp>&)
     operator==(const _List_iterator<_Val>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_list.h:287:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::_List_iterator<_Tp>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/iterator:66:0,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stream_iterator.h:130:5: note: candidate: template<class _Tp, class _CharT, class _Traits, class _Dist> bool std::operator==(const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&, const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&)
     operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stream_iterator.h:130:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/locale_facets.h:48:0,
                 from /usr/include/c++/7/bits/basic_ios.h:37,
                 from /usr/include/c++/7/ios:44,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iterator:64,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note: candidate: template<class _CharT, class _Traits> bool std::operator==(const std::istreambuf_iterator<_CharT, _Traits>&, const std::istreambuf_iterator<_CharT, _Traits>&)
     operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
     ^~~~~~~~
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::istreambuf_iterator<_CharT, _Traits>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/ios_base.h:46:0,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iterator:64,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/system_error:311:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_condition&)
   operator==(const error_condition& __lhs,
   ^~~~~~~~
/usr/include/c++/7/system_error:311:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_condition&’
/usr/include/c++/7/system_error:304:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_code&)
   operator==(const error_condition& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:304:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_condition&’
/usr/include/c++/7/system_error:297:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_condition&)
   operator==(const error_code& __lhs, const error_condition& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:297:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_code&’
/usr/include/c++/7/system_error:292:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_code&)
   operator==(const error_code& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:292:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_code&’
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6031:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const _CharT*)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6031:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6019:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const _CharT*, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const _CharT* __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6019:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   mismatched types ‘const _CharT*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6005:5: note: candidate: template<class _CharT> typename __gnu_cxx::__enable_if<std::__is_char<_Tp>::__value, bool>::__type std::operator==(const std::__cxx11::basic_string<_CharT>&, const std::__cxx11::basic_string<_CharT>&)
     operator==(const basic_string<_CharT>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6005:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:5997:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:5997:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/allocator.h:152:5: note: candidate: template<class _Tp> bool std::operator==(const std::allocator<_Tp>&, const std::allocator<_Tp>&)
     operator==(const allocator<_Tp>&, const allocator<_Tp>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:152:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::allocator<_Tp>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/allocator.h:146:5: note: candidate: template<class _T1, class _T2> bool std::operator==(const std::allocator<_Tp>&, const std::allocator<_Tp>&)
     operator==(const allocator<_T1>&, const allocator<_T2>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:146:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::allocator<_Tp>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/char_traits.h:40:0,
                 from /usr/include/c++/7/string:40,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/postypes.h:216:5: note: candidate: template<class _StateT> bool std::operator==(const std::fpos<_StateT>&, const std::fpos<_StateT>&)
     operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
     ^~~~~~~~
/usr/include/c++/7/bits/postypes.h:216:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::fpos<_StateT>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:1124:5: note: candidate: template<class _Iterator> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorL>&)
     operator==(const move_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1124:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::move_iterator<_IteratorL>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:1118:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorR>&)
     operator==(const move_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1118:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::move_iterator<_IteratorL>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:337:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_IteratorR>&)
     operator==(const reverse_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:337:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::reverse_iterator<_Iterator>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:299:5: note: candidate: template<class _Iterator> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_Iterator>&)
     operator==(const reverse_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:299:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::reverse_iterator<_Iterator>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
In file included from /usr/include/c++/7/utility:70:0,
                 from /usr/include/c++/7/algorithm:60,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_pair.h:443:5: note: candidate: template<class _T1, class _T2> constexpr bool std::operator==(const std::pair<_T1, _T2>&, const std::pair<_T1, _T2>&)
     operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_pair.h:443:5: note:   template argument deduction/substitution failed:
main.cpp:36:38: note:   ‘const QChar’ is not derived from ‘const std::pair<_T1, _T2>’
         else if (cmdlinearg.at(i) == "run")
                                      ^~~~~
main.cpp:39:35: error: ‘const class QChar’ has no member named ‘contains’
         else if (cmdlinearg.at(i).contains("remip="))
                                   ^~~~~~~~
main.cpp:50:35: error: ‘const class QChar’ has no member named ‘contains’
         else if (cmdlinearg.at(i).contains("fw="))
                                   ^~~~~~~~
main.cpp:64:35: error: no match for ‘operator==’ (operand types are ‘const QChar’ and ‘const char [7]’)
         else if (cmdlinearg.at(i) == "reboot")
                  ~~~~~~~~~~~~~~~~~^~~~~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:392:13: note: candidate: bool operator==(QChar, QChar) <near match>
 inline bool operator==(QChar c1, QChar c2) { return c1.unicode() == c2.unicode(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qchar.h:392:13: note:   conversion of argument 2 would be ill-formed:
main.cpp:64:38: error: conversion from ‘const char [7]’ to ‘QChar’ is ambiguous
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:383:8: note: candidate: QChar::QChar(int) <near match>
 inline QChar::QChar(int rc) : ucs(ushort(rc & 0xffff)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:383:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:64:38: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:382:8: note: candidate: QChar::QChar(uint) <near match>
 inline QChar::QChar(uint rc) : ucs(ushort(rc & 0xffff)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:382:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:64:38: error: invalid conversion from ‘const char*’ to ‘uint {aka unsigned int}’ [-fpermissive]
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:381:8: note: candidate: QChar::QChar(short int) <near match>
 inline QChar::QChar(short rc) : ucs(ushort(rc)){}
        ^~~~~
/usr/include/qt4/QtCore/qchar.h:381:8: note:   conversion of argument 1 would be ill-formed:
main.cpp:64:38: error: invalid conversion from ‘const char*’ to ‘short int’ [-fpermissive]
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:81:12: note: candidate: QChar::QChar(ushort) <near match>
     inline QChar(ushort rc) : ucs(rc){}
            ^~~~~
/usr/include/qt4/QtCore/qchar.h:81:12: note:   conversion of argument 1 would be ill-formed:
main.cpp:64:38: error: invalid conversion from ‘const char*’ to ‘ushort {aka short unsigned int}’ [-fpermissive]
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:77:36: note: candidate: QChar::QChar(uchar) <near match>
     QT_ASCII_CAST_WARN_CONSTRUCTOR QChar(uchar c);
                                    ^~~~~
/usr/include/qt4/QtCore/qchar.h:77:36: note:   conversion of argument 1 would be ill-formed:
main.cpp:64:38: error: invalid conversion from ‘const char*’ to ‘uchar {aka unsigned char}’ [-fpermissive]
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qstring.h:45:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qchar.h:76:36: note: candidate: QChar::QChar(char) <near match>
     QT_ASCII_CAST_WARN_CONSTRUCTOR QChar(char c);
                                    ^~~~~
/usr/include/qt4/QtCore/qchar.h:76:36: note:   conversion of argument 1 would be ill-formed:
main.cpp:64:38: error: invalid conversion from ‘const char*’ to ‘char’ [-fpermissive]
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qnamespace.h:45:0,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qglobal.h:2140:13: note: candidate: bool operator==(QBool, bool)
 inline bool operator==(QBool b1, bool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2140:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QBool’
/usr/include/qt4/QtCore/qglobal.h:2141:13: note: candidate: bool operator==(bool, QBool)
 inline bool operator==(bool b1, QBool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2141:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘bool’
/usr/include/qt4/QtCore/qglobal.h:2142:13: note: candidate: bool operator==(QBool, QBool)
 inline bool operator==(QBool b1, QBool b2) { return !b1 == !b2; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qglobal.h:2142:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QBool’
In file included from /usr/include/qt4/QtCore/qstring.h:46:0,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qbytearray.h:527:13: note: candidate: bool operator==(const QByteArray&, const QByteArray&)
 inline bool operator==(const QByteArray &a1, const QByteArray &a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:527:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QByteArray&’
/usr/include/qt4/QtCore/qbytearray.h:529:13: note: candidate: bool operator==(const QByteArray&, const char*)
 inline bool operator==(const QByteArray &a1, const char *a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:529:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QByteArray&’
/usr/include/qt4/QtCore/qbytearray.h:531:13: note: candidate: bool operator==(const char*, const QByteArray&)
 inline bool operator==(const char *a1, const QByteArray &a2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qbytearray.h:531:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
In file included from /usr/include/qt4/QtCore/qobject.h:48:0,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qstring.h:908:13: note: candidate: bool operator==(QString::Null, QString::Null)
 inline bool operator==(QString::Null, QString::Null) { return true; }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:908:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:909:13: note: candidate: bool operator==(QString::Null, const QString&)
 inline bool operator==(QString::Null, const QString &s) { return s.isNull(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:909:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:910:13: note: candidate: bool operator==(const QString&, QString::Null)
 inline bool operator==(const QString &s, QString::Null) { return s.isNull(); }
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:910:13: note:   no known conversion for argument 2 from ‘const char [7]’ to ‘QString::Null’
/usr/include/qt4/QtCore/qstring.h:936:32: note: candidate: bool operator==(const char*, const QString&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QString &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:936:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:949:32: note: candidate: bool operator==(const char*, const QLatin1String&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QLatin1String &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:949:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:962:13: note: candidate: bool operator==(const QLatin1String&, const QLatin1String&)
 inline bool operator==(const QLatin1String &s1, const QLatin1String &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:962:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QLatin1String&’
/usr/include/qt4/QtCore/qstring.h:1202:20: note: candidate: bool operator==(const QStringRef&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QStringRef &s1,const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1202:20: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1205:20: note: candidate: bool operator==(const QString&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QString &s1,const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1205:20: note:   no known conversion for argument 2 from ‘const char [7]’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1208:13: note: candidate: bool operator==(const QStringRef&, const QString&)
 inline bool operator==(const QStringRef &s1,const QString &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1208:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1212:20: note: candidate: bool operator==(const QLatin1String&, const QStringRef&)
 Q_CORE_EXPORT bool operator==(const QLatin1String &s1, const QStringRef &s2);
                    ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1212:20: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QLatin1String&’
/usr/include/qt4/QtCore/qstring.h:1215:13: note: candidate: bool operator==(const QStringRef&, const QLatin1String&)
 inline bool operator==(const QStringRef &s1,const QLatin1String &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1215:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
/usr/include/qt4/QtCore/qstring.h:1236:32: note: candidate: bool operator==(const char*, const QStringRef&)
 inline QT_ASCII_CAST_WARN bool operator==(const char *s1, const QStringRef &s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1236:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const char*’
/usr/include/qt4/QtCore/qstring.h:1238:32: note: candidate: bool operator==(const QStringRef&, const char*)
 inline QT_ASCII_CAST_WARN bool operator==(const QStringRef &s1, const char *s2)
                                ^~~~~~~~
/usr/include/qt4/QtCore/qstring.h:1238:32: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QStringRef&’
In file included from /usr/include/qt4/QtCore/qobject.h:54:0,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/qt4/QtCore/qscopedpointer.h:174:13: note: candidate: template<class T, class Cleanup> bool operator==(const QScopedPointer<T, Cleanup>&, const QScopedPointer<T, Cleanup>&)
 inline bool operator==(const QScopedPointer<T, Cleanup> &lhs, const QScopedPointer<T, Cleanup> &rhs)
             ^~~~~~~~
/usr/include/qt4/QtCore/qscopedpointer.h:174:13: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const QScopedPointer<T, Cleanup>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtGui/qapplication.h:47:0,
                 from ../../lib/include/ext_udp.h:4,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpoint.h:161:13: note: candidate: bool operator==(const QPoint&, const QPoint&)
 inline bool operator==(const QPoint &p1, const QPoint &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpoint.h:161:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QPoint&’
/usr/include/qt4/QtCore/qpoint.h:329:13: note: candidate: bool operator==(const QPointF&, const QPointF&)
 inline bool operator==(const QPointF &p1, const QPointF &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpoint.h:329:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QPointF&’
In file included from /usr/include/qt4/QtGui/qapplication.h:48:0,
                 from ../../lib/include/ext_udp.h:4,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsize.h:156:13: note: candidate: bool operator==(const QSize&, const QSize&)
 inline bool operator==(const QSize &s1, const QSize &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qsize.h:156:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QSize&’
/usr/include/qt4/QtCore/qsize.h:314:13: note: candidate: bool operator==(const QSizeF&, const QSizeF&)
 inline bool operator==(const QSizeF &s1, const QSizeF &s2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qsize.h:314:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QSizeF&’
In file included from /usr/include/qt4/QtCore/qhash.h:49:0,
                 from /usr/include/qt4/QtCore/qcache.h:45,
                 from /usr/include/qt4/QtCore/QtCore:7,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpair.h:70:24: note: candidate: template<class T1, class T2> bool operator==(const QPair<T1, T2>&, const QPair<T1, T2>&)
 Q_INLINE_TEMPLATE bool operator==(const QPair<T1, T2> &p1, const QPair<T1, T2> &p2)
                        ^~~~~~~~
/usr/include/qt4/QtCore/qpair.h:70:24: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const QPair<T1, T2>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qcache.h:45:0,
                 from /usr/include/qt4/QtCore/QtCore:7,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qhash.h:198:13: note: candidate: bool operator==(const QHashDummyValue&, const QHashDummyValue&)
 inline bool operator==(const QHashDummyValue & /* v1 */, const QHashDummyValue & /* v2 */)
             ^~~~~~~~
/usr/include/qt4/QtCore/qhash.h:198:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QHashDummyValue&’
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:694:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const QSharedPointer<T>&)
 bool operator==(const QSharedPointer<T> &ptr1, const QSharedPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:694:6: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:705:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const X*)
 bool operator==(const QSharedPointer<T> &ptr1, const X *ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:705:6: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:710:6: note: candidate: template<class T, class X> bool operator==(const T*, const QSharedPointer<T>&)
 bool operator==(const T *ptr1, const QSharedPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:710:6: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   mismatched types ‘const T*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qsharedpointer.h:50:0,
                 from /usr/include/qt4/QtCore/qdatetime.h:47,
                 from /usr/include/qt4/QtCore/QtCore:12,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qsharedpointer_impl.h:726:6: note: candidate: template<class T, class X> bool operator==(const QSharedPointer<X>&, const QWeakPointer<X>&)
 bool operator==(const QSharedPointer<T> &ptr1, const QWeakPointer<X> &ptr2)
      ^~~~~~~~
/usr/include/qt4/QtCore/qsharedpointer_impl.h:726:6: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const QSharedPointer<X>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/qlocale.h:45:0,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qvariant.h:559:13: note: candidate: bool operator==(const QVariant&, const QVariantComparisonHelper&)
 inline bool operator==(const QVariant &v1, const QVariantComparisonHelper &v2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qvariant.h:559:13: note:   no known conversion for argument 2 from ‘const char [7]’ to ‘const QVariantComparisonHelper&’
In file included from /usr/include/qt4/QtCore/QtCore:22:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qmargins.h:121:13: note: candidate: bool operator==(const QMargins&, const QMargins&)
 inline bool operator==(const QMargins &m1, const QMargins &m2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qmargins.h:121:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QMargins&’
In file included from /usr/include/qt4/QtCore/QtCore:26:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qrect.h:496:13: note: candidate: bool operator==(const QRect&, const QRect&)
 inline bool operator==(const QRect &r1, const QRect &r2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qrect.h:496:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QRect&’
/usr/include/qt4/QtCore/qrect.h:833:13: note: candidate: bool operator==(const QRectF&, const QRectF&)
 inline bool operator==(const QRectF &r1, const QRectF &r2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qrect.h:833:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QRectF&’
In file included from /usr/include/qt4/QtCore/QtCore:41:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qvarlengtharray.h:383:6: note: candidate: template<class T, int Prealloc1, int Prealloc2> bool operator==(const QVarLengthArray<T, Prealloc1>&, const QVarLengthArray<T, Prealloc2>&)
 bool operator==(const QVarLengthArray<T, Prealloc1> &l, const QVarLengthArray<T, Prealloc2> &r)
      ^~~~~~~~
/usr/include/qt4/QtCore/qvarlengtharray.h:383:6: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const QVarLengthArray<T, Prealloc1>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:87:13: note: candidate: template<class T> bool operator==(const T*, const QPointer<T>&)
 inline bool operator==(const T *o, const QPointer<T> &p)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:87:13: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   mismatched types ‘const T*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:91:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, const T*)
 inline bool operator==(const QPointer<T> &p, const T *o)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:91:13: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:107:13: note: candidate: template<class T> bool operator==(T*, const QPointer<T>&)
 inline bool operator==(T *o, const QPointer<T> &p)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:107:13: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   mismatched types ‘T*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:111:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, T*)
 inline bool operator==(const QPointer<T> &p, T *o)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:111:13: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtCore/QtCore:64:0,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtCore/qpointer.h:115:13: note: candidate: template<class T> bool operator==(const QPointer<T>&, const QPointer<T>&)
 inline bool operator==(const QPointer<T> &p1, const QPointer<T> &p2)
             ^~~~~~~~
/usr/include/qt4/QtCore/qpointer.h:115:13: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const QPointer<T>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/qt4/QtGui/qgraphicslayoutitem.h:47:0,
                 from /usr/include/qt4/QtGui/qgraphicslayout.h:45,
                 from /usr/include/qt4/QtGui/qgraphicsanchorlayout.h:46,
                 from /usr/include/qt4/QtGui/QtGui:4,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qevent.h:736:13: note: candidate: bool operator==(QKeyEvent*, QKeySequence::StandardKey)
 inline bool operator==(QKeyEvent *e, QKeySequence::StandardKey key){return (e ? e->matches(key) : false);}
             ^~~~~~~~
/usr/include/qt4/QtGui/qevent.h:736:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QKeyEvent*’
/usr/include/qt4/QtGui/qevent.h:737:13: note: candidate: bool operator==(QKeySequence::StandardKey, QKeyEvent*)
 inline bool operator==(QKeySequence::StandardKey key, QKeyEvent *e){return (e ? e->matches(key) : false);}
             ^~~~~~~~
/usr/include/qt4/QtGui/qevent.h:737:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘QKeySequence::StandardKey’
In file included from /usr/include/qt4/QtGui/QVector3D:1:0,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:46,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector3d.h:209:13: note: candidate: bool operator==(const QVector3D&, const QVector3D&)
 inline bool operator==(const QVector3D &v1, const QVector3D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector3d.h:209:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector3D&’
In file included from /usr/include/qt4/QtGui/qmatrix4x4.h:46:0,
                 from /usr/include/qt4/QtGui/QMatrix4x4:1,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:48,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector4d.h:213:13: note: candidate: bool operator==(const QVector4D&, const QVector4D&)
 inline bool operator==(const QVector4D &v1, const QVector4D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector4d.h:213:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector4D&’
In file included from /usr/include/qt4/QtGui/qmatrix4x4.h:47:0,
                 from /usr/include/qt4/QtGui/QMatrix4x4:1,
                 from /usr/include/qt4/QtGui/qgraphicstransform.h:48,
                 from /usr/include/qt4/QtGui/QtGui:14,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qquaternion.h:229:13: note: candidate: bool operator==(const QQuaternion&, const QQuaternion&)
 inline bool operator==(const QQuaternion &q1, const QQuaternion &q2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qquaternion.h:229:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QQuaternion&’
In file included from /usr/include/qt4/QtGui/QtGui:219:0,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/qt4/QtGui/qvector2d.h:187:13: note: candidate: bool operator==(const QVector2D&, const QVector2D&)
 inline bool operator==(const QVector2D &v1, const QVector2D &v2)
             ^~~~~~~~
/usr/include/qt4/QtGui/qvector2d.h:187:13: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const QVector2D&’
In file included from /usr/include/c++/7/vector:64:0,
                 from /usr/include/qt4/QtCore/qvector.h:52,
                 from /usr/include/qt4/QtCore/qstack.h:45,
                 from /usr/include/qt4/QtCore/QtCore:34,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_vector.h:1596:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator==(const std::vector<_Tp, _Alloc>&, const std::vector<_Tp, _Alloc>&)
     operator==(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_vector.h:1596:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::vector<_Tp, _Alloc>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/map:62:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_multimap.h:1061:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::multimap<_Key, _Tp, _Compare, _Alloc>&, const std::multimap<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_multimap.h:1061:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::multimap<_Key, _Tp, _Compare, _Alloc>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/map:61:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_map.h:1395:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::map<_Key, _Tp, _Compare, _Alloc>&, const std::map<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_map.h:1395:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::map<_Key, _Tp, _Compare, _Alloc>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/bits/stl_map.h:63:0,
                 from /usr/include/c++/7/map:61,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/tuple:1397:5: note: candidate: template<class ... _TElements, class ... _UElements> constexpr bool std::operator==(const std::tuple<_Tps ...>&, const std::tuple<_Args2 ...>&)
     operator==(const tuple<_TElements...>& __t,
     ^~~~~~~~
/usr/include/c++/7/tuple:1397:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::tuple<_Tps ...>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/tuple:39:0,
                 from /usr/include/c++/7/bits/stl_map.h:63,
                 from /usr/include/c++/7/map:61,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/array:252:5: note: candidate: template<class _Tp, long unsigned int _Nm> bool std::operator==(const std::array<_Tp, _Nm>&, const std::array<_Tp, _Nm>&)
     operator==(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
     ^~~~~~~~
/usr/include/c++/7/array:252:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::array<_Tp, _Nm>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_tree.h:1533:5: note: candidate: template<class _Key, class _Val, class _KeyOfValue, class _Compare, class _Alloc> bool std::operator==(const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&, const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&)
     operator==(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:1533:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from /usr/include/qt4/QtCore/qmap.h:50,
                 from /usr/include/qt4/QtCore/qvariant.h:49,
                 from /usr/include/qt4/QtCore/qlocale.h:45,
                 from /usr/include/qt4/QtCore/QtCore:20,
                 from /usr/include/qt4/QtGui/QtGui:3,
                 from ../../lib/include/ext_udp.h:5,
                 from main.cpp:13:
/usr/include/c++/7/bits/stl_tree.h:406:5: note: candidate: template<class _Val> bool std::operator==(const std::_Rb_tree_iterator<_Tp>&, const std::_Rb_tree_const_iterator<_Val>&)
     operator==(const _Rb_tree_iterator<_Val>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:406:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::_Rb_tree_iterator<_Tp>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/list:63:0,
                 from /usr/include/qt4/QtCore/qlist.h:51,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_list.h:1884:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator==(const std::__cxx11::list<_Tp, _Alloc>&, const std::__cxx11::list<_Tp, _Alloc>&)
     operator==(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_list.h:1884:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::list<_Tp, _Alloc>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/list:63:0,
                 from /usr/include/qt4/QtCore/qlist.h:51,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_list.h:287:5: note: candidate: template<class _Val> bool std::operator==(const std::_List_iterator<_Tp>&, const std::_List_const_iterator<_Tp>&)
     operator==(const _List_iterator<_Val>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_list.h:287:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::_List_iterator<_Tp>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/iterator:66:0,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stream_iterator.h:130:5: note: candidate: template<class _Tp, class _CharT, class _Traits, class _Dist> bool std::operator==(const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&, const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&)
     operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stream_iterator.h:130:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/bits/locale_facets.h:48:0,
                 from /usr/include/c++/7/bits/basic_ios.h:37,
                 from /usr/include/c++/7/ios:44,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iterator:64,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note: candidate: template<class _CharT, class _Traits> bool std::operator==(const std::istreambuf_iterator<_CharT, _Traits>&, const std::istreambuf_iterator<_CharT, _Traits>&)
     operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
     ^~~~~~~~
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::istreambuf_iterator<_CharT, _Traits>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/bits/ios_base.h:46:0,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iterator:64,
                 from /usr/include/qt4/QtCore/qlist.h:50,
                 from /usr/include/qt4/QtCore/qobject.h:50,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/system_error:311:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_condition&)
   operator==(const error_condition& __lhs,
   ^~~~~~~~
/usr/include/c++/7/system_error:311:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_condition&’
/usr/include/c++/7/system_error:304:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_code&)
   operator==(const error_condition& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:304:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_condition&’
/usr/include/c++/7/system_error:297:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_condition&)
   operator==(const error_code& __lhs, const error_condition& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:297:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_code&’
/usr/include/c++/7/system_error:292:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_code&)
   operator==(const error_code& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:292:3: note:   no known conversion for argument 1 from ‘const QChar’ to ‘const std::error_code&’
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6031:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const _CharT*)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6031:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6019:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const _CharT*, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const _CharT* __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6019:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   mismatched types ‘const _CharT*’ and ‘QChar’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6005:5: note: candidate: template<class _CharT> typename __gnu_cxx::__enable_if<std::__is_char<_Tp>::__value, bool>::__type std::operator==(const std::__cxx11::basic_string<_CharT>&, const std::__cxx11::basic_string<_CharT>&)
     operator==(const basic_string<_CharT>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6005:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/basic_string.h:5997:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:5997:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/allocator.h:152:5: note: candidate: template<class _Tp> bool std::operator==(const std::allocator<_Tp>&, const std::allocator<_Tp>&)
     operator==(const allocator<_Tp>&, const allocator<_Tp>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:152:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::allocator<_Tp>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/allocator.h:146:5: note: candidate: template<class _T1, class _T2> bool std::operator==(const std::allocator<_Tp>&, const std::allocator<_Tp>&)
     operator==(const allocator<_T1>&, const allocator<_T2>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:146:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::allocator<_Tp>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/bits/char_traits.h:40:0,
                 from /usr/include/c++/7/string:40,
                 from /usr/include/qt4/QtCore/qstring.h:54,
                 from /usr/include/qt4/QtCore/qobject.h:48,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/postypes.h:216:5: note: candidate: template<class _StateT> bool std::operator==(const std::fpos<_StateT>&, const std::fpos<_StateT>&)
     operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
     ^~~~~~~~
/usr/include/c++/7/bits/postypes.h:216:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::fpos<_StateT>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:1124:5: note: candidate: template<class _Iterator> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorL>&)
     operator==(const move_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1124:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::move_iterator<_IteratorL>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:1118:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorR>&)
     operator==(const move_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1118:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::move_iterator<_IteratorL>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:337:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_IteratorR>&)
     operator==(const reverse_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:337:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::reverse_iterator<_Iterator>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/algorithm:61,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_iterator.h:299:5: note: candidate: template<class _Iterator> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_Iterator>&)
     operator==(const reverse_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:299:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::reverse_iterator<_Iterator>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
In file included from /usr/include/c++/7/utility:70:0,
                 from /usr/include/c++/7/algorithm:60,
                 from /usr/include/qt4/QtCore/qglobal.h:68,
                 from /usr/include/qt4/QtCore/qnamespace.h:45,
                 from /usr/include/qt4/QtCore/qobjectdefs.h:45,
                 from /usr/include/qt4/QtCore/qobject.h:47,
                 from /usr/include/qt4/QtCore/qcoreapplication.h:45,
                 from /usr/include/qt4/QtCore/QCoreApplication:1,
                 from main.cpp:1:
/usr/include/c++/7/bits/stl_pair.h:443:5: note: candidate: template<class _T1, class _T2> constexpr bool std::operator==(const std::pair<_T1, _T2>&, const std::pair<_T1, _T2>&)
     operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_pair.h:443:5: note:   template argument deduction/substitution failed:
main.cpp:64:38: note:   ‘const QChar’ is not derived from ‘const std::pair<_T1, _T2>’
         else if (cmdlinearg.at(i) == "reboot")
                                      ^~~~~~~~
main.cpp: In function ‘int WaitForResult(int)’:
main.cpp:90:1: warning: no return statement in function returning non-void [-Wreturn-type]
 }
 ^
main.cpp: In function ‘int main(int, char**)’:
main.cpp:92:14: warning: unused parameter ‘argc’ [-Wunused-parameter]
 int main(int argc, char **argv)
              ^~~~
main.cpp:92:27: warning: unused parameter ‘argv’ [-Wunused-parameter]
 int main(int argc, char **argv)
                           ^~~~
make: *** [/tmp/console/main.o] Error 1
