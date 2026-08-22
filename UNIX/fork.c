#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        printf("Child Process: PID = %d\n child's parent= %d", getpid(),getppid());
    } else {
        printf("Parent Process: PID = %d, Child PID = %d\n", getpid(), pid);
        wait(NULL); // Parent waits for child to finish
    }
    return 0;
}   