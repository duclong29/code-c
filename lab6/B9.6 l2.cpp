#include<stdio.h>
int main()
{
	int count = 0;
	while(count < 100)
	{
		printf("this gose on forever, HELP!!!\n");
		count += 10;
		printf("\t%d", count);
		count -= 10;
		printf("\t%d", count);
		printf("\ctrl - C will help");
	}
	
	return 0;
}
