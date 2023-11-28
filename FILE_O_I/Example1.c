#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fa;
    fa = fopen("test1.txt", "r");
    if (fa == NULL)
    {
        printf("ERROR\n");
        exit(0);
    }
    else
    {
        printf("ALL good\n");
    }
    return 0;
}