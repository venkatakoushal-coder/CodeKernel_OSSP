#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main() {
    char message[100];

    mkfifo("myfifo", 0666);

    printf("Server waiting...\n");

    while (1) {
        int fd = open("myfifo", O_RDONLY);

        read(fd, message, sizeof(message));

        printf("Client: %s\n", message);

        close(fd);
    }

    return 0;
}
