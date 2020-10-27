#include<stdio.h>
#include<conio.h>
int main()
{
	int cnt;
	//clrscr();
	for(cnt=5; cnt <= 20; cnt++)
	{
		if(cnt==19)
		break;
		printf("%d\t", cnt);
	}
	
	return 0;
}
