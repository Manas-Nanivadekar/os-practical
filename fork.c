#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int pid = fork();
    if (pid == -1)
    {
        printf("fork failed!");
    }
    else if (pid == 0)
    {
        printf("Hello from the child process! %d\n", getpid());
    }
    else
    {
        printf("Hello from the parent process! %d\n", getppid());
    }
}