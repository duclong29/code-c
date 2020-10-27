#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	//clrscr();
	labe11:
		printf("\n enter a nuber (1):");
		   scanf("%d", &num);
	if(num==1)
	 goto test;
	  else
	goto labe11;
	  test:
	printf("ALL done...");
	
	return 0;
}
