#include <stdio.h>

int main()
{
	int num1,num2;
	printf("enter 1st number");
	scanf("%d",&num1);
	printf("enter 2nd number");
	scanf("%d", &num2);
	
	int add(num1, num2)
	{
		int result=num1+num2;
		printf("%d",result);
	}
	
	add(num1,num2);
}