#include <stdio.h>
#include <unistd.h>
int main()
{
printf("i am the original process\n");
pid_t process1=fork();
if(process1<0)
{
printf("fork failed");
}
else if(process1==0)
{
printf("i am the child process");
}
else
{
printf("i am a parent process");
}
}