#include<stdio.h>
int main()
{
	int ary[10];
	int i, total, high;
	
	for(i=0; i<10; i++)
	{
		printf("\n enter value:%d", i+1);
		scanf("%d", &ary[i]);
	}
	/* displays highest of the entered value */
	   high = ary[0];
	   for(i=0; i<10; i++)
	   {
	
		 if(ary[i] > high)
		 high = ary[i];
	   }
	    printf("\n Highest value entered was %d", high);
	/* prints average of value entered for ary[10] */
	
	   for(i=0, total=0; i<10; i++)
	   total = total + ary[10];
	
	      printf("\n the average of the element of ary is %d", total/i);
	
	return 0;
}
