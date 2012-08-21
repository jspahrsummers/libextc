/**
 * libextc testcase helper functions
 * ExtendedC
 *
 * Copyright (C) 2012 Justin Spahr-Summers
 * Released under the MIT license
 */

#include "test.h"

#ifdef BENCHMARK_WITH_TIMEVAL
static double timeval_to_double (const struct timeval *tv) {
    return (double)tv->tv_sec + tv->tv_usec / 1000000.0;
}
#endif

void benchmark_begin (benchmark_t *start) {
#ifdef BENCHMARK_WITH_TIMEVAL
    gettimeofday(start, NULL);
#else
    *start = clock();
#endif
}

double benchmark_end (benchmark_t *start) {
    benchmark_t end;
    
#ifdef BENCHMARK_WITH_TIMEVAL
    gettimeofday(&end, NULL);
    
    return timeval_to_double(&end) - timeval_to_double(start);
#else
    end = clock();
    
    return end / (double)CLOCKS_PER_SEC - *start / (double)CLOCKS_PER_SEC;
#endif
}
