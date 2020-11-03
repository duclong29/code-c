#include<stdio.h>
int main()
{
	int i, sum, Max, Min, Ary[10],demMin=0,demMax=0;
//	int m=90, k=12;
	
	for(i=0; i<10; i++)
	{
    	scanf("%d", &Ary[i]);
		sum += Ary[i];
    }
		float avg = sum/10;	
		printf("tong cac so la:%d\n", sum);
		printf("trung binh cong la:%f\n", avg);
    
//	max=Ary[0];
//	for(i=1; i<10; i++)
//	{
//		if(Ary[i]>max)
//		max=Ary[i];
//	}
//	printf("so lon nhap la:%d\n", max);
//	min=Ary[0];
//	for(i=1; i<10; i++)
//	{
//		if(Ary[i]<min)
//		min=Ary[i];
//	}
//	printf("so nho nhat la:%d\n", min);
	Max = Ary[0];
	Min = Ary[0];
	for(i =1;i<10;i++)
	{
		if(Ary[i]>Max)	Max = Ary[i];
		if(Ary[i]<Min)	Min = Ary[i];
	}
	for(i =0;i<10;i++)
	{
		if(Ary[i] == Max)	demMax++;
		if(Ary[i] == Min)	demMin++;
	}
	printf("so nho nhat la:%d va co %d so trong mang \n", Min,demMin);
	printf("so lon nhap la:%d va co %d so trong mang\n", Max,demMax);
	return 0;
}
