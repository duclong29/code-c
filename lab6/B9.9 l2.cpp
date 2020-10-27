#include<stdio.h>
int main()
{
	int x;
	char i, ans;
	i='y';
	do
	{
		//clrscr();
		x=0;
		ans='y';
		printf("\n enter sequence of character:");
	do
	{
		i=getchar();
		x++;
	}
	while(i !='n');
	  i='y';
	  printf("\n number of character entered id:%d", --x);
	  printf("\n more sequences (y/n)?");
	    ans=getchar();
	}
	while(ans=='y' || ans=='y');
	
	
	return 0;
}
