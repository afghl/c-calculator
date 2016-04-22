#include <stdio.h>
#include <stdlib.h>
#include "calc.h"


int bp = 0;
int buf[MAXVAL];

int getbufch() {
    return bp == 0 ? buf[--bp] : getchar();
}

void ungetbufch(int c) {
    buf[bp++] = c;
}
