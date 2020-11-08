#include<stdio.h>
int main()
{
	int chieuCao, canNang;
	char hocThuc, tinhTinh, xinh, cursh;
	
	printf("tieu chuan lam crush cua long la:\n\n");
	printf("chieu cao cua crush long la:");
	scanf("%d", &chieuCao);
	printf("can nang cua crush long la:");
	scanf("%d", &canNang);
	printf("hoc thuc cua crush long la:");
	scanf("%s", &hocThuc);
	printf("tinh tinh cua cua crush long la:");
	scanf("%s", &tinhTinh);
	printf("long muon co crush xinh khong:");
	scanf("%s", &xinh);
	check(chieuCao);
}
int check(int chieuCao)
	{
		if(chieuCao <= 170 || chieuCao >= 150)
		{
			printf("ok tam chap nhan:\n");
			int say();
		}
		else 
		{
			printf("xl chung ta khong cung dang cap:\n");
		}
	}
int say( )
{
	char toTinh;	
		printf("hi! lam ny a nhe???(y\n)");
		fflush(stdin);
		scanf("%c", &toTinh);
	if(toTinh = 'y')
	{
		printf("ok anh yeu");
		Love();
	}
	else
	{
		printf("xl e da co ny roi!!!");
		Break();
	}
}
int Break()
{
	printf("se khong ai yeu em that long nhu anh:");
}
int Love()
{
	printf("nguyen lam no le cho em nguyen yeu em het cuoc doi:");
}
