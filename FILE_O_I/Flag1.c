#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    char FileName[] = "FlagFile.txt";
    char Text[] = "Hello,World\n";
    int fd;

    fd = open(FileName, O_CREAT | O_WRONLY, 0644);
    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }
    if (write(fd, Text, sizeof(Text) - 1) == -1)
    {
        perror("Write");
        exit(EXIT_FAILURE);
    }
    if (close(fd) == -1)
    {
        perror("Close");
        exit(EXIT_FAILURE);
    }
    printf("wrote \"%s\" to file \"%s\"\n", Text, FileName);
    return 0;
}
