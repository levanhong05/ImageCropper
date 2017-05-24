#ifndef IMAGECROPPER_GLOBAL_H
#define IMAGECROPPER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(IMAGECROPPER_LIBRARY)
    #define IMAGECROPPERSHARED_EXPORT Q_DECL_EXPORT
#else
    #define IMAGECROPPERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // IMAGECROPPER_GLOBAL_H
