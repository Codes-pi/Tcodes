#include <stdio.h>

int main()
{
	char name[]="hello world";
	printf("%s \n",name);
	printf("%c \n",name[0]);
	printf("%c \n",name[10]);
	printf("%lu", sizeof(name));
}
