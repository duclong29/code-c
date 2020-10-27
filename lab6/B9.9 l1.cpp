#include<stdio.h>
int main()
{
	int x;
	char i, ans;
	i = 'y';
	do
	{
		//clrscr();
		x=0;
		ans='y';
	    printf("\n enter sepuence of character:");
	do
	{
		i=getchar();
		x++;
	}
	while(i != '\n');
	i = 'y';
	printf("\n number of character entered is:%d", --x);
	printf("\n more sequences (y/n)?");
	}
	while(ans=='y' || ans=='y');
	
	
	return 0;
}
