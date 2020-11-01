#include<stdio.h>
int main()
{
	char crush_name[99], ans='y';
	int i;
	
	printf("what's is your name:");
	scanf("%s", crush_name);
	
	for(i=0; i<=100; i++)
	{
		printf("Fall in love:%d\n", i);
	}
	do
	{
		printf("will you be my girlfriend:");
		scanf("%c", &ans);
	}
	while(ans != 'y');
	  printf("I LOVE YOU");
	  
	  int a, b, c;
	  c=20;
	  for(a=c/2; a<=c; a=a+2)
	  {
	  	for(b=1; b<c-a; b=b+2)
	  	   printf(" ");
	  	for(b=1; b<=a; b++)
	  	   printf("*");
	  	for(b=1; b<=c-a; b++)
	  	  printf(" ");
	  	for(b=1; b<=a-1; b++)
	  	   printf("*");
	  	   
	  	   printf("\n");
	  }
	  for(a=c; a>=0; a--)
	  {
	  	for(b=a; b<c; b++)
	  	    printf(" ");
	  	for(b=1; b<=((a*2)-1); b++)
	  	    printf("*");
	  	    
	  	    printf("\n");
	  }
	
	return 0;
}
