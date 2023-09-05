#ifndef MBEDTLS_PLATFORM_ALT_H
#define MBEDTLS_PLATFORM_ALT_H

#include "mbedtls/build_info.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "ff.h"
#include "app.h"

#define stderr          0
typedef struct mbedtls_platform_context {
    char dummy; /**< A placeholder member, as empty structs are not portable. */
}
mbedtls_platform_context;

#ifdef __cplusplus
}
#endif
#endif /* platform.h */
