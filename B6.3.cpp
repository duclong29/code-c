#include<stdio.h>
int main()
{
	printf("the number 555.55 in various forms:\n");
	printf("in float form without modifier:\n");
	printf("[%f]\n",555.55);
	printf("in exponential form without any modifier:\n");
	printf("[%e]\n",555.55);
	printf("in float form with - modifier:\n");
	printf("[%-f]\n",555.55);
	printf("in float form with digit string 10.3 as modifier:\n");
	printf("[%10.3f]",555.55);
	printf("in float form with 0 as modifier:\n");
	printf("[%0f]\n",555.55);
	printf("in float form with o and digit string 10.3");
	printf("as modifier:\n");
	printf("[%010.3f]\n",555.55);
	printf("in float form with -,0");
	printf("and digit string 10.3 as modifier:\n");
	printf("[%-010.3f]\n",555.55);
	printf("in exponential form with 0");
	printf("and digit string 10.3 as modifier:\n");
	printf("[%010.3e]\n",555.55);
	printf("in exponential form with -,0");
	printf("and digit string 10.3 as ,modifier:\n");
	printf("[%-010.3e]\n",555.55);
	
	
	return 0;
}
