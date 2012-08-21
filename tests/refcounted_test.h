/**
 * libextc refcounted testcase
 * ExtendedC
 *
 * Copyright (C) 2012 Justin Spahr-Summers
 * Released under the MIT license
 */

#ifndef EXTC_TEST_REFCOUNTED_H
#define EXTC_TEST_REFCOUNTED_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "refcounted.h"
#include "test.h"

void refcounted_benchmark (void);
void refcounted_test (void);

#endif
