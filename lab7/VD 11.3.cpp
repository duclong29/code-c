#include<stdio.h>
int main()
{
	char alpha[26];
	int i, j;
	
	for(i=65, j=0; i<91; i++, j++)
	{
		alpha[j] = i;
		printf("the character now assigmed is %c\n", alpha[j]);
	}
   getchar();
	return 0;
}
