#include<stdio.h>
#include<string.h>

int Login(char name[],int pass);
void Withdraw(int num,int *soTien);
void Transfer(int id,int num,int *soTien);
void Check(int soTien);

void main()
{
	printf("wellcome to long bank:\n");
	
	int chon, pass, isLogin,soTien =5000000,num;
	char name[20],id[20];
	
	isLogin = Login(name,pass);
	if(isLogin == 1)
	{
		do
		{
			printf("moi ban chon chuc nang:\n");
			printf("1. Withdraw\n");
			printf("2. Transfer\n");
			printf("3. Check\n");
			printf("4. exit\n");
			scanf("%d", &chon);
			
			switch(chon)
			{
				case 1:
					printf("nhap so tien ban can rut:");
					scanf("%d", &num);
					Withdraw(num,&soTien);
					break;
				case 2:
					printf("nhap so tai khoan ban muon chuyen:\n");
					fflush(stdin);
					gets(id);
					printf("so tien ban muon chuyen la:");
					scanf("%d",&num);
					Transfer(id,num,&soTien);
				case 3:
					Check(soTien);
				default:
					exit(0);		
			}
		}
		while(1);
	}	
}
int Login(char name[], int pass)
{
		printf("ten tai khoan:\n");
		gets(name);
		printf("moi ban nhap pass:\n"); 
		scanf("%d", &pass);
		if(pass == 2000 && strcmp(name,"Long") == 0)
		{
			printf("ban da nhap dung mat khau va user!\n");
			return 1;
		}
		else
			printf("Nhap sai!");
	return 0;
}
void Withdraw(int num, int *soTien)
{
	 if(num < 5000000 && num % 50 == 0 && num < *soTien)
	 {
	 	*soTien -= num;
	 	printf("ban da rut tien thanh cong %d\n", num);
	 	printf("so tien ban con lai la:%d\n", *soTien);
	 }
	 else
	 {
	 	printf("so tien ban rut ko thoa man\n");
	 }
}
void Transfer(int id,int num,int *soTien)
{
	*soTien-=num;
	printf("Da chuyen!\n");
}
void Check(int soTien)
{
	printf("So tien con lai: %d",soTien);
}
