#include <stdio.h>

char sd(char *s, char *t)
{
    *s = 'A';
    *t = 'B';
    return *s == *t ? *s : *t;
}

void main()
{
    char a = 'X', b = 'Y', r;
    r = sd(&a, &b);
    printf("%c %c %c", a, b, r);
}
