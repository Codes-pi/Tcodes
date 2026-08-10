#include <stdio.h>
int main (){
	char ch;
	printf ("enter a alphabate: ");
	scanf ("%c", &ch);
	if (ch=='a'|| ch=='e'|| ch=='i' || ch=='o'|| ch=='u')
	printf ("this is vowel");
	else 
	printf ("this is consonant");
	
	return 0; 
}