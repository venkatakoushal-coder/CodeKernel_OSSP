#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int src, dest;
    char data[100];
    int bytes;

    src = open("source.txt", O_RDONLY);
    dest = open("destination.txt", O_RDWR);

    bytes = read(src, data, 100);
    write(dest, data, bytes);

    close(src);
    close(dest);

    printf("File copied successfully\n");

    return 0;
}
