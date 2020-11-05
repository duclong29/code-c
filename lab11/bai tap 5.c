#include<stdio.h>
int main()
{
	menu();
	chonMenu();
}
void menu()
	{
		printf("moi ban chon :");
	
		printf("1. nhap so");
		printf("2. tint tong");
		printf("3. tinh hieu");
		printf("4. tinh tich");
		printf("5. tinh thuong");
		printf("6. thoat");	
    } 
    void chonMenu()
    {
	     int a, b, n;
	     int sum, sub, multi;
	 	 scanf("%d",&n);
	 switch(n)
	 {
	 	case 1:
	 		printf("nhap mot so:%d");
	 		break;
	 	case 2:
	 	    int sum(int a, int b);
	 	    sum = a + b;
	 	    return (sum);
	 	    break;
	 	case 2:
	 		int sub(int a, int b);
	 		sub = a - b;
	 		return (sub);
	 		break;
	 	case 3:
	 		int multi(int a, int b);
	 		multi = a*b;
	 		break;
	 }
	while(n != 6);
	return 0;
	 
    } 

