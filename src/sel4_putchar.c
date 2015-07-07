/*
 * Copyright 2015, Wink Saville
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

#include <sel4/sel4.h>

#include <sel4/putchar.h>

/**
 * Output ch to a "terminal"
 */
void seL4_PutChar(const char ch) {
#ifdef DEBUG
    seL4_DebugPutChar(ch);
#else
    // TODO: we need seL4_PutChar ????
#endif
}
