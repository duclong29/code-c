#include<stdio.h>
int main()
{
	int x;
	x=0;
	//clrscr();
	printf("enter choice (1-3):");
	scanf("%d", &x);
	 if(x==1)
	 printf("\nChoice is 1");
	 else if(x==2)
	 printf("\nChoice is 2");
	 else if(x==3)
	 printf("\nChoice is 3");
	 else
	 printf("\nInvalid choice: Invalid choice");
	return 0;
}
