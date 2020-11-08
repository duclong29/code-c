#include<stdio.h>
void main()
{
	char name[20];
	/* name is declared as a single dimensional character array */
	//clrscr();
	printf("Enter your name:");       /* Displays a message */
	
	scanf("%s", name);    /* Accepts the input */
	printf("Hi there:%s", name);    /*displays the input */
	
	getch();
}
