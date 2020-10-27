#include<stdio.h>
int main()
{
	int a, b;
	
	printf("nhap so a:");
	scanf("%d", &a);
	
	printf("nhap so b:");
	scanf("%d", &b);
	
  if(a-b==a||a-b==b)
	printf("hieu bang mot trong hai gia tri");
  else
    printf("hieu ko bang gia tri nao");
	
	return 0;
}
