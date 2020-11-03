#include<stdio.h>
int main()
{
	int a, b, c;
	a=b=c=0;
	
	printf("\n Enter 1st integer:");
	scanf("%d", &a);
	printf("\n Enter 2st integer:");
	scanf("%d", &b);
	 c = adder(a, b);
	printf("\n\na & b in main() are:%d, %d", a, b);
	printf("\n\c in main() is:%d", c);
	/* c gives the addition of a and b */
}
adder(int a, int b)
{
	int c;
	c = a + b;
	a *= a;
	b += 5;
	printf("\n\na & b within adder function are:%d, %d", a, b);
	printf("\nc within adder function is:%d", c);
	return (c);
}
