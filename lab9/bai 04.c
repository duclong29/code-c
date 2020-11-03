#include<stdio.h>

int main(){
	int i;
	char hv[5][30];
	for(i=0;i<5;i++)
	{
		printf("Nhap ten %d: ",i);
		fflush(stdin);
		scanf("%s",&hv[i]);
	}
	for(i=0;i<5;i++){
		printf("Cac ten vua nhap la : ");
		printf("%s\n",hv[i]);
	}
	
}
