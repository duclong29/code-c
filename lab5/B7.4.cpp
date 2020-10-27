#include<stdio.h>
int main()
{
 int tienluong;
 int A, B, LK;
  A=300;
  B=250;
  LK=100;
 printf("tien luong cua nhan vien:");
 scanf("%d", &tienluong);
  
  printf("tien luong cuoi thang cua nhan vien loai A:%d\n", tienluong*30+300);
  printf("tien luong cuoi thang cua nhan vien loai B:%d\n", tienluong*30+250);
  printf("tien luong cuoi thang cua nhan vien loai khac:%d\n", tienluong*30+100);
 
	return 0;
}
