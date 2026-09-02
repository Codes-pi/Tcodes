#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed");
    }

    if (pid == 0) {
        // Child process
        sleep(5); // Simulate work; parent will exit before this finishes
        printf("Child PID: %d, Parent PID: %d (Adopted by init)\n", getpid(), getppid());
    } else {
        // Parent process
        printf("Parent PID: %d, Child PID: %d\n", getpid(), pid);
        // Parent exits immediately, making the child an orphan
        exit(0);
    }

    return 0;
}   