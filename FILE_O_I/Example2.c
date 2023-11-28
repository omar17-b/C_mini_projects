#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr;

    fptr = fopen("test2.txt", "w");

    if (fptr == NULL)
    {
        printf("ERROR\n");
        exit(0);
    }
    else
    {
        printf("file is created\n");
    }

    return 0;
}
