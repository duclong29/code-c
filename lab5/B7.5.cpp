#include<stdio.h>
int main()
{
	int a, diem;
	
	  printf("diem hoc sinh:");
	  scanf("%d", &a);
	  
	if(a >= 75)
	printf("la loai A:", a);
	
	else if(a >= 60 && a<75)
	printf("la loai B:", a);
	 
	else if(a >= 45 && a<60)
	printf("la loai C:", a);
	
	else if(a >= 35 && a<45)
	printf("la loai D:", a);
	
	else if(a<35)
	printf(" la loai E:", a);

	return 0;
}
