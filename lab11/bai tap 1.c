#include<stdio.h>
main()
{
	int a, b,c;
	
	printf("canh thu nhat cua tam giac:");
	scanf("%d", &a);
	printf("canh thu hai cua tam giac:");
	scanf("%d", &b);
	printf("canh thu ba cua tam giac:");
	scanf("%d", &c);
	
	GetArea(a, b, c);
}
void GetArea(int a, int b, int c)
{
    float p,s;
     p = (a+b+c)/2;

		if(a+b>c && a+c>b && b+c>a)
		{
		    s = sqrt(p*(p-a)*(p-b)*(p-c));
			printf("dien tich cua tam giac la:%f", s);
	    }
		else
		{
			printf("ba canh cua tam giac ko hop le:");
		}
		
	
}
