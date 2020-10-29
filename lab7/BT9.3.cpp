#include<stdio.h>
int main()
{
	int  num1, num2, num3, i, sum;
	
	  printf("nhap so fibonaci:");
	  scanf("%d", &sum);
	  printf("%d%d", num1,num2);
	  
	  for(i=1; i<sum; ++i)
	  {
	  num1=num2;
	  num2=num3;
	  num3=num1+num2;
	  
	  printf("%d\t", num3);	
	  }
	     
	return 0;
}
