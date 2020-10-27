#include<stdio.h>
#include<conio.h>
int main()
{
	int cnt = 0, num;
	//clrscr();
	do
	{
		printf("\nenter a number:");
		scanf("%d", &num);
		printf("no. is %d\n", num);
		cnt++;
	}
	while(num != 0);
	printf("\n the total numbers entered were %d", --cnt);
	
	return 0;
}
