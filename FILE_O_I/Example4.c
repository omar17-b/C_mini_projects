#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* Fptr;
    char DataToBeRead[50];

Fptr=fopen("test4.txt","r");
if (Fptr == NULL)
    {
        printf("ERROR\n");
        exit(0);
    }
    else
    {
        printf("file is now opend\n");
        while (fgets(DataToBeRead,50,Fptr)!=NULL)
        {
            printf("%s\n",DataToBeRead);
        }
        fclose(Fptr);
        printf("ALL GOOD\n");
    }
    return 0;
}
