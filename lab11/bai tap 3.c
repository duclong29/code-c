#include<stdio.h>

    int reverse(int i)
{
    	printf("cac so nguoc lai la:\n");
	    
	for(i=5; i>0; i--)
	{
		printf("%d", i);
	}
	
}
int main()
{
	int Arr[5], i;
	
	printf("nhap mot so:\n");
	for(i=0; i<5;i++)
	{
		scanf("%d", &Arr[i]);
	}
	for(i=0; i<1; i++)
	{
		printf("%d", reverse(Arr[i]));
	}
}
