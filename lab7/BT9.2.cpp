#include<stdio.h>
int main()
{
	int num1, num2, i, sum=0;
	
	
	 printf("so dau la:");
	 scanf("%d", &num1);
	 
	 printf("so sau la:");
	 scanf("%d", &num2);
	 
	 for(i = num1; i <= num2; i++)
	 {
	 	if(i % 2 != 0)
	 	{
	 		sum = sum + i
			 ;
	 	}
		 }
	printf("tong hai so le la:%d", sum);
	return 0;
}
