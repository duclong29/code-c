#include<stdio.h>
int main()
{
     int chu_duc_long[20];
     int i, age;
     
     printf("nhap ten ban:");
     scanf("%d", &chu_duc_long);
     
     printf("nhap tuoi ban:\n");
     scanf("%d", &age);
     
     for(i=0; i<=20; i++)
        printf("xin chao:%d\n lan:%d\n so tuoi:%d\n\n", chu_duc_long, i+1,i+1);

	return 0;
}
