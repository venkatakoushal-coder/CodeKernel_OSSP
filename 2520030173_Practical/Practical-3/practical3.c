#include <stdio.h>
#include <unistd.h>

int main()
{
    int process;

    process = fork();

    if (process < 0)
    {
        printf("Fork failed\n");
    }
    else if (process == 0)
    {
        printf("Child Process\n");
        printf("PID: %d\n", getpid());
        printf("PPID: %d\n", getppid());
    }
    else
    {
        printf("Parent Process\n");
        printf("PID: %d\n", getpid());
        printf("PPID: %d\n", getppid());
    }

    return 0;
}
