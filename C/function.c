//functions are used to divide a large program in c programing into smaller parts

//2 types of functions - 1) library funtions 2)user defined functions 

//declaration -> function define -> function calling

//functions are always writen outside the main function

#include <stdio.h>
void printstar(int num){
	int i;
	for (i=0;i<num;i++)
	{
		printf("*");
	}
}

int main()
{
	int x;
	printf("how many stars ?");
	scanf("%d",&x);  
	printstar(x);
	return 0;
	
}