#include<stdio.h>
int main()
{
	int num[10];
	int i;
	
	for(i=0; i<10; i++)
	   scanf("%d", &num[i]);
	{
		for(i=0; i<10; i+=2)
		printf("%d\n", num[i]);
	}
	return 0;
}
