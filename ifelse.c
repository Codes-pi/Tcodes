#include <stdio.h>
//if else statement
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    printf("you have entered: %d \n",age);
    if(age>=18){
        printf("you can vote !");
    }   
    else if(age >=10){
        printf("you cannot vote as you are a kid");
    }
    else
    {
        printf("you are a baby");
    }
    
}
