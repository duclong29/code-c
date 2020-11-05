#include<stdio.h>
int main()
{
	char c;
	printf("please enter a character: ");
	scanf("%c", &c);
	if(c>='A'&&c<='Z')
	printf("Lowercase character = %c", c+'a'-'A');
	else
	printf("character entered is=%c", c);
	
	return 0;
}
