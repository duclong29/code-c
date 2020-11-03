#include<stdio.h>

int main()
{
	int i,j;
	float tongdiem=0;
	char a[30][30];	
	float diem[30][4];
	for(i = 0 ;i<30;i++)
	{
		printf("Nhap ten HS :");
		fflush(stdin);
		gets(a[i]);
		for(j =0;j<4;j++)
		{
			printf("Nhap diem 4 mon cuar hs:");
			scanf("%f",&diem[i][j]);
		}
	}
	for(i =0;i<30;i++)
	{
		tongdiem =0;
		for(j =0;j<4;j++)
		{
			tongdiem = tongdiem + diem[i][j];
		}
		printf("Avg cua hs thu %d = %f\n",(i+1),tongdiem/4);		
	}
}
