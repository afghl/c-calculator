#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main(int argc, char *argv[]) {
    int type;
    double op2;
    char s[MAXOP];

    while(1) {
        type = buildOperation(s);
        if (type == EOF) break;
        switch(type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                push(pop() / op2);
                break;
            case '\n':
                printf("result: %0.8g\n", pop());
                break;
            default:
                printf("unknown operation\n");
                break;
        }
    }

    return 0;
}
