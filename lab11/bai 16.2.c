#include<stdio.h>
void main()
{
	int a, b, c, sum;
	
	printf("\n Enter any three numbers ");
	scanf("%d %d %d", &a, &b, &c);
	sum = calculatsum(a, b, c);
	printf("\n Sum = %d", sum);
}
calculatsum(int x, int y, int z)
{
	int d;
	
	d = x + y + z;
	return(d);
}
