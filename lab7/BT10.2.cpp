#include<stdio.h>
int main()
{
	int i, j, k;
	
    printf("nhap mot so");
    scanf("%d", &i);
	
	for(j=1; j<=i; j++)
	{
	   	   printf("\n");

	   for(k=1; k<=j; k++)
	  printf("%d", k);
    }
	return 0;
}
