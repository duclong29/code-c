#include<stdio.h>
int main()
{
	int num;
	
	printf("nhap mot so:");
	scanf("%d", &num);
	for(num=100; num>=5; num-=5)
	   printf("%d\n", num);
	
	return 0;
}
