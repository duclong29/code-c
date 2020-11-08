#include<stdio.h>

main()
{
	float a, b, s, c;
	int chon;
	
	printf("chieu dai hcn la:");
	scanf("%f", &a);
	printf("chieu rong hcn la:");
	scanf("%f", &b);
	
	do
	{
		printf("moi ban chon so:\n");
		printf("1. dien tich la:\n");
		printf("2. chu vi la:\n");
		scanf("%d", &chon);
		switch(chon)
		{
			case 1:
				s = a*b;
				printf("dien tich hcn la :%.2f\n", s);
				break;
			case 2:
				c = (a+b)*2;
				printf("chu vi hcn la :%.2f\n", c);
				break;
		}
	}while(chon != 2);
	  	
}
float s(float a, float b)
{
	float s;
	s = a*b;
	return s;
}
float c(float a, float b)
{
	float c;
	c = (a+b)*2;
	return c;
}
