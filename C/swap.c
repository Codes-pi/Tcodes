#include <stdio.h>
//swaping numbers
int main()
{
    int p,q,temp;
    printf("enter two numbers: ");
    scanf("%d%d", &p,&q);
    //p=5
    //q=6
    //temp=p
    //current situation "temp=p=5"
    //p=q=6
    //q=temp=5
    temp=p;
    p=q;
    q=temp;

    printf("value of p then q: %d%d",p,q);   
    
}
