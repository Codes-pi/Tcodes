#include <stdio.h>
int main()
{
	int choise;
	printf("enter choise");
	scanf("%d",&choise);

//while (1) {
//	printf("1. 1st case");
//	printf("2. 2nd case");
//}
	switch (choise)
	{
		case 1: printf("this is 1st case");
		break;
		
		case 2: printf("this is 2nd case");
		break;
		
		case 3: printf("exiting... ");
		return 0;
		default: printf("this is default");
	}	
}