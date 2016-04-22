#define NUMBER '0'
#define MAXVAL 100
#define MAXOP 100

int getbufch(void);
void ungetbufch(int);

void push(double);

double pop(void);
int buildOperation(char []);
