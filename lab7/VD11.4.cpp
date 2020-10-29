#include<stdio.h>
int main()
{
	char ary[5];
	int i;
	 
	 printf("\n Enter string:");
	 scanf("%c", &ary);
	 printf("\n the string is %d \n\n", ary);
	  
	  for(i=0; i<5; i++)
	   printf("\t%d", ary[i]);
	
	return 0;
}
