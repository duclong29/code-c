#include<stdio.h>
#include<conio.h>
int main()
{
	int i, j, k;
	
	printf("ve tam giac vuong:");
	scanf("%d", &i);
	
	for(j=0; j<=i; j++)
	{
		printf("\n");
		
		for(k=j; k<=i; k++)
		printf("*");
	}
	
	return 0;
}
