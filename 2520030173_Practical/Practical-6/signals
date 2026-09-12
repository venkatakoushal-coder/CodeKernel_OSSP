#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int signal) {
    if (signal == SIGINT)
        printf("\nSIGINT received\n");
    else if (signal == SIGTERM)
        printf("SIGTERM received\n");
    else if (signal == SIGUSR1)
        printf("SIGUSR1 received\n");
}

int main() {
    signal(SIGINT, handler);
    signal(SIGTERM, handler);
    signal(SIGUSR1, handler);

    printf("PID: %d\n", getpid());

    while (1)
        pause();

    return 0;
}
