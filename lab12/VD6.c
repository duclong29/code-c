#include<stdio.h>
#include<string.h>
void main()
{
	char hotelname1[15] = "Sea View";
	char hotelname2[15] = "Sea Breeze";
	
	printf("the old name is %s\n", hotelname1);
	strcpy(hotelname1, hotelname2);
	/* changes the hotel name */
	printf("the new name is %s\n", hotelname1);
	/*Displays the new name*/
	
	getch();
}
