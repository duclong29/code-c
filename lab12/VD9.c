#include<stdio.h>
void main()
{
	char lines[5][20];
	int ctr, longctr = 0;
	
	int longest(char lines_arr[][20]);
	/* function declaration */
	for(ctr=0; ctr<5; ctr++)
	{
		printf("\n Enter string %d:", ctr+1);
		scanf("%s", lines[ctr]);
	}
	longctr = longest(lines);
	printf("\n The longest string is %s", lines[longctr]);
	getch();
}
int longest(char lines_arr[][20])
{
	int i=0, l_ctr = 0, prev_len, new_len;
	
	prev_len = strlen(lines_arr[i]);
	for(i++; i<5; i++)
	{
		new_len = strlen(lines_arr[i]);
		
	if(new_len > prev_len)
		l_ctr = i;
	}
	return l_ctr;
}
