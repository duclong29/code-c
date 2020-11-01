#include<stdio.h>
int main()
{
	int mathe, mapin;
	char ch;
	int stk, tk, ck, rt, tien;
	int count=0, ok=0;
	tk=5000000;
	
	printf("welcome to LONG bank\n");
	printf("moi ban nhap the vao\n");
	printf("nhap ma the:");
	scanf("%d", &mathe);
	
	printf("nhap ma pin:");
	scanf("%d", &mapin);
	
	if(mapin != 1234)
	do
	{
		printf("moi ban nhap lai mapin\n");
		     scanf("%d", &mapin);
		if(mapin == 1234)
		{    
		     printf("nhap mapin dung\n");
		     break;}
		     else
		        count++;
	}
	
	while(count<=3 || ok==0);
	{
		if(mapin != 1234)
		{
		printf("the cua ban da bi khoa! len phuong");
       
         }
	    else
	    printf("mapin dung");
    }
    do
    {
    	printf("moi ban chon chuc nang:\n");
    	printf("1 la rut tien\n");
    	printf("2 la chuyen tien\n");
    	printf("3 la kiem tra so du\n");
    	printf("4 la ket thuc\n");
    	scanf("%s", &ch);
    	
    	switch(ch)
    	{
    		case 1:
    			{
    				printf("moi ban nhap so tien can rut:");
    				scanf("%d", &tien);
    				if(tien>tk)
    				{
    					printf("so tien ban rut lon hon so tien co trong tai khoan");
					}
					else
					if(tien>2000000)
					{
						printf("so tien rut toi da la 2000000");
					}
					else
					if(tien % 500 !=0)
					{
						printf("so tien rut phai la boi cua 500");
					}
					else
					{
					    tk -= tien;
					    printf("so tien con trong tai khoan la:%d", tk);
					}
					break;
			    }
			case 2:
				{
					printf("moi ban nhap so tai khoan ban muon chuyen:");
					scanf("%d", &stk);
					printf("moi ban nhap so tien ban muon chuyen:");
					scanf("%d", &ck);
					printf("so tien con lai trong khoan cua ban la:%d", tk-ck);
					break;
				}
			case 3:
				{
					printf("so tien trong tai khoan cua ban la:%d", tk);
					break;
				}
			case 4:
				{
					printf("giao dich da song!\n moi ban nhan lai the:");
				}
				break;
		}
    	
	}
	while(ch != 0);
	return 0;
}
