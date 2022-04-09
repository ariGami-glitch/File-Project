#include <stdio.h>
#include <stdlib.h>

void panic (char *m)
{
    printf("%s\n", m);
    exit(1);
}
