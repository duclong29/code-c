#include<stdio.h>
int main()
{
	int intArr[5];
	float floatArr[10];
	int i;
	
	for(i=0; i<5; i++)
    {
    	scanf("%d", &intArr[i]);
    	floatArr[i] = intArr[i];
	}
	printf("%d", intArr[i]);	
	for(i=5; i<10; i++)
	{
		floatArr[i] = 1;
	}
	printf("%f\n", floatArr[i]);
	
	for (i=0; i<10; i++)
	printf("%f\n", floatArr[i]);
	
	return 0;
}
