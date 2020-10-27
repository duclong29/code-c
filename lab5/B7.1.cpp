#include<stdio.h>
int main()
{
	int a, b;
	
	printf(" nhap so a:");
	scanf("%d", &a);
	
	printf(" nhap so b:");
	scanf("%d", &b);
	
	if(a%b==0)
	printf("a chia het cho b");
	else
	printf("a khong chia het cho b");
	return 0;
}
