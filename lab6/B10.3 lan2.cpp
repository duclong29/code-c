#include<stdio.h>
#include<conio.h>
int main()
{
	int cnt=10, num;
	//clrscr();
	do
	{
		printf("\n enter a number:");
		scanf("%d", &num);
		printf("no. is %d", num);
		cnt++;
	}
	while(num != 0);
	printf("\n the total numbers entered were %d", --cnt);
	return 0;
}
