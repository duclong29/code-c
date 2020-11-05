#include<stdio.h>
main()
{
	int i;
	for(i=1; i<=10; i++)
	printf("\n square of %d is %d", i, square (i));
}

square(int x)
/* int x; */
{
	int j;
	j=x*x;
	return (j);
}
