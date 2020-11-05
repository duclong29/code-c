#include<stdio.h>

int indexMin(int arr[])
{
	int Min = arr[0],i;
	for(i =1;i<10;i++)
		if(arr[i]<Min)	Min = arr[i];
	return Min;
}
int main()
{
	int arr[10],i;
	for(i =0;i<10;i++)
	{
		printf("Nhap ptu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i =0;i<10;i++)
	{
		if(arr[i] == indexMin(arr))
		{
			printf("Min trong mang = %d va o vi tri thu %d .",indexMin(arr),(i+1));
			break;
		}
	}
}
