#include<stdio.h>
#include<string.h>
void main()
{
	char str1[15] = "New York";
	char str2[15] = "Washington";
	char chr = 'a', *loc;
	
	//clrscr();
	
	loc = strchr(str1, chr);
	/* checks for the occurrence of the character value held by chr in the first city name */
	if(loc != NULL)
	printf("%c occurs in %s\n", chr, str1);
	else 
		printf("%c dose not occurs in %c\n", chr, str1);
	loc = strchar(str2, chr);
	/* checks for the occurrence of  the character in the second city name */
	if(loc != NULL)
		printf("%c occurs in %c\n", chr, str2);
	else
		printf("%c dose not occurs in %c\n", chr, str2);
	getch();
}
