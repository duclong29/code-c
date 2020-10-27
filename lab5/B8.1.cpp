#include<stdio.h>
int main()
{
	int a, b;
	
	printf("nhap so a:");
	scanf("%d", &a);
	
	printf("nhap so b:");
	scanf("%d", &b);
	
	if(a < 2000 && a > 3000)
	{
	   printf("thoa man so a voi yeu cau");
	
	if(b >= 100 && b <= 500)
	   printf("thoa man so b voi yeu cau");
}
	else
	   printf("khong thoa man yeu cau");
	
	return 0;
}
