#ifndef LIBAPPQML_GLOBAL_H
#define LIBAPPQML_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBAPPQML_LIBRARY)
#  define LIBAPPQMLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBAPPQMLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBAPPQML_GLOBAL_H