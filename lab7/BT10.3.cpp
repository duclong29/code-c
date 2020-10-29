#include<stdio.h>
int main()
{
	int a, b, c, max;
	b=10;
	printf("bang cuu chuong:");
	scanf("%d", &max);
	 
	 for(c=1; c<=max;c++)
	{
		for(a=0; a<b; a++)
		  printf("%d*%d=%d\n", (a+1), c, (a+1)*c );
	}
	return 0;
}
