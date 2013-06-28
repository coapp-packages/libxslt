#ifndef __XML_XSLTWIN32CONFIG_H_MOD__
#define __XML_XSLTWIN32CONFIG_H_MOD__

#include "xsltwin32config.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WITH_MODULES
#define LIBXSLT_DEFAULT_PLUGINS_PATH() getenv("LIBXSLT_PLUGINS_PATH")
#endif

#ifdef __cplusplus
}
#endif

#endif /* __XML_XSLTWIN32CONFIG_H_MOD__ */
