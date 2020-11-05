#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2, res;
	char ch;
	num1=90;
	num2=33;
	ch='-';
	//clrscr();
	switch(ch)
	{
		case'+':
			res=num1+num2;
		printf("\n the sum is:%d",res);
		break;
		case'-':
			res=num1-num2;
		printf("\n number after subtraction:%d",res);
		break;
		case'/':
		     res=num1/num2;
		printf("\nnumber after division:%d",res);
		break;
		case'*':
		     res=num1*num2;
	    printf("\n number after multiplication:%d",res);
		break;
		default:
		printf("\n invalid");
		break;	
	}
	return 0;
}
