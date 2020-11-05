#include<stdio.h>
int main()
{
	int year;
	printf("\tyear:");
	scanf("%d", &year);
	if(year%4==0 && year%100!=0 || year%400==0)
	printf("\n%d=1year!", year);
	return 0;
}
