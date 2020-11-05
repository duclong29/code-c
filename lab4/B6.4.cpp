#include<stdio.h>
int main()
{
	printf("A string in various form:\n");
	printf("without any form command:\n");
	printf("Good day Mr.Lee.\n");
	printf("with form command buut without any modifier:\n");
	printf("[%s]\n", "Good day Mr.Lee");
	printf("with digit string 4 as modifier:\n");
	printf("[%4s]\n", "Good day Mr.Lee");
	printf("with digit string 19 as modifier:\n");
	printf("[%19s]\n","Good day Mr.Lee");
	printf("with digit string 23 as modifier:\n");
	printf("[%23s]\n","Good day Mr.Lee");
	printf("with - and digit string 25.4 as modifier:\n");
	printf("[%-25.5s]\n","Good day Me.Lee");
	
	return 0;
}
