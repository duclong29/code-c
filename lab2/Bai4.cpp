#include<stdio.h>
int main(){
	float a, h;
	printf("a=");scanf("%f", &a);
	printf("h=");scanf("%f", &h);
	float s = (a*h)/2;
	printf("s=%.2f",s);
	return 0;
}
