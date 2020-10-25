#include<stdio.h>
int main()
{
	int a;
	float d;
	char ch, name[40];
	printf("please enter the data\n");
	scanf("%d %f %s", &a, &d, &ch, name);
	printf("\nThe values accepted are: %d, %f, %c, %s", a, d, ch, name);
	
	return 0;
}
