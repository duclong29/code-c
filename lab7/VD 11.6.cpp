#include<stdio.h>
int main()
{
	int i, n=0;
	int item;
	char x[10][12];
	char temp[12];
	 //clrscr();
	 
	 printf("Enter each string on a separate line \n\n");
	 printf("type 'END' when over \n\n");
	 
	 /* read in the list of string */
	 
	 do {
	 	printf("string %d:", n+1);
	 	scanf("%s", x[n]);
	 }
	 while(strcmp(x[n++], "END"));
	 
	 /* reorder the list of string */
	 n=n-1;
	 for(item=0; item<n-1; ++item)
	   {
	 	/* find lowest of remaining string */
	 	for(i=item=1; i<n; i++)
	 	if(strcmp(x[item], x[i])>0)
	 	{
	 
	 /* interchange two string */
	  strcmp(temp, x[item]);
	  strcmp(x[item], x[i]);
	  strcmp(x[i], temp);
       }
        }
	  /* Display the arranged list of string */
	  printf("Recorded list of strings:\n");
	  for(i=0; i<n; i++)
	  {
	  	printf("\n string %d is %s", i=1, x[i]);
	  }
	
	return 0;
}
