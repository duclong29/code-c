#include<stdio.h>
#include<conio.h>
int main()
{
	int cnt;
	//clrscr();
	for(cnt=1; cnt <= 10; cnt++)
	{
		if(cnt==5)
		break;
		printf("%d\t", cnt);
	}
	
	return 0;
}
