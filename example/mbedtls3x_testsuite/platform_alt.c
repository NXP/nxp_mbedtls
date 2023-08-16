/*
 * Copyright 2023 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "mbedtls/build_info.h"
#include "platform_alt.h"

#if defined(MBEDTLS_PLATFORM_C)

#if defined(MBEDTLS_PLATFORM_SETUP_TEARDOWN_ALT)
/*
 * Placeholder platform setup that does nothing by default
 */
int mbedtls_platform_setup(mbedtls_platform_context *ctx)
{
    BOARD_InitHardware();

    return 0;
}

/*
 * Placeholder platform teardown that does nothing by default
 */
void mbedtls_platform_teardown(mbedtls_platform_context *ctx)
{
    (void) ctx;
}
#endif /* MBEDTLS_PLATFORM_SETUP_TEARDOWN_ALT */

#endif /* MBEDTLS_PLATFORM_C */

