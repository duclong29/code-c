#include<stdio.h>
main()
{
	int i, num[5];
	
	for(i=0; i<5; i++){

	printf("nhap mot so:");
	scanf("%d", &num[i]);
     }
	check(num);
}
    int check(int num)
{
	if(num % 50 == 0)
	{
	    printf("so nguyen chia het cho 50 la:%d", num);
	    return (1);
	}
		printf("so nguyen ko chia het cho 50 la:%d", num);
		return (0);
	
}
