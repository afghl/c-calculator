#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int sp = 0;
double stack[MAXVAL];


void push(double f) {
    stack[sp++] = f;
}

double pop() {
    return stack[--sp];
}
