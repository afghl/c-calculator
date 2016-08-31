#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calc.h"

int buildOperation(char s[]) {
    int i, c;
    // skip blank character at the beginning
    while (1) {
        s[0] = c = getbufch();
        if (c != ' ' && c != '\t' ) {
            break;
        }
    }
    // not start with number, return.
    if (!isdigit(c) && c != '.') {
        s[1] = '\0';
        return c;
    }

    i = 1;

    while(isdigit(c)) {
        s[i++] = c = getbufch();
    }

    s[--i] = '\0';
    if (c != EOF) {
        ungetbufch(c);
    }
    return NUMBER;
}
