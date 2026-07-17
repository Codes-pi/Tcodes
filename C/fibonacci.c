//nextern -> t1=0, t2=1 then the nexterm= t1+t2=1
#include <stdio.h>

int main()
{
	int n,nexterm;
	int t1=0, t2=1;
	printf("enter how many terms: ");
	scanf("%d", &n);
	printf("fibonacci series \n");
	for (int i = 1; i<=n;i++)
	{
		printf("%d ",t1);
		nexterm=t1+t2;
		//swap
		t1=t2;
		t2=nexterm;
	}
	printf("\n");
}