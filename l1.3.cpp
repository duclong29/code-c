#include<stdio.h>
int main()
{
	printf("the number 555.55 in various forms:\n");
	printf("In float forms without any modifier:\n");
	printf("[%f]\n",555.55);
	printf("IN exponential form without any modifier:\n");
	printf("[%e]\n",555.55);
	printf("In float form with - modifier:\n");
	printf("[%-f]\n",555.55);
	printf("In float form with digit string 10.3 as modifier:\n");
	printf("[%10.3f]\n",555.55);
	printf("In float with 0 as modifier:\n");
	printf("[%0f]",555.55);
	printf("In float with 0 and digit string 10.3");
	printf("as modifier:\n");
	printf("[%010.3f]\n",555.55);
	printf("In float form with -, 0");
	printf("and diigit string 10.3 as modifier:\n");
	printf("[%-010.3f]\n",555.55);
	printf("In exponential form with 0");
	printf("and digit string 10.3 as modifier:\n");
	printf("[%010.3e]\n",555.55);
	printf("In exponential form with -, o");
	printf("and digit string 10.3 as modifier:\n");
	printf("[%-010.3e]\n\n",555.55);
	
	return 0;
	
}
