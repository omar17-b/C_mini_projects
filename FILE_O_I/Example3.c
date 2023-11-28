#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    FILE *fptr;

    char DataToBeWriten[50] = "Hello,World :D";

    fptr = fopen("test3.c", "w");
    if (fptr == NULL)
    {
        printf("ERROR\n");
        exit(0);
    }
    else
    {
        printf("the file is now opend \n");
        if (strlen(DataToBeWriten) > 0)
        {
            fputs(DataToBeWriten, fptr);
            fputs("\n", fptr);
        }
        fclose(fptr);
        printf("All good");
    }
    return 0;
}
