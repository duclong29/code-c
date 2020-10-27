#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("nhap so a:");
	scanf("%d", &a);
	
	printf("nhap so b:");
	scanf("%d", &b);
	
	c=a*b;
	if(c==1000)
	  printf("c=%d", c);
	else if(c!=1000)
	  printf("c=%d", c);
	
	return 0;
}
