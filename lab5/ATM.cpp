#include<stdio.h>
int main()
{
	printf( "welcome to long vietcombank");
	    int mathe;
		int mapin;
	    printf("\nnhap ma the:");
	    scanf("%d", &mathe);
	    printf("\nnhap ma pin:");
	    scanf("%d", &mapin);
	
	if(mathe ==1234 && mapin == 123)
	{
	
       int a;
       printf("moi ban chon chuc nang:\n");
       printf("1 la chuyen tien\n");
       printf("2 la rut tien\n");
       printf("3 la kiem tra so du\n");
       printf("4 la ket thuc\n");
       scanf("%d",&a);
      
       
	   if(a==1)
       {
       	int sotien;
       	int phi=5;
       	int sodu=1000;
       	int tienchuyen;
       	printf("tai khoan nguoi nhan la:");
       	scanf("%d", &sotien);
       	if(sotien%50 && sotien<500)
       	   {
       		char ans='y';
       		printf("giao dich mat phi ban co muon chuyen ko:(y or n)");
       		fflush(stdin);
       		scanf("%c", &ans);
       		if(ans=='y')
			   {
       		    printf("So du sau khi chuyen tien la : %d",sodu = sotien - phi);	
			   
			   }else{
			   	printf("Ban da khong su dung dich vu");
			   }
			   }else{
		   	printf("so tien can chuyen phai nho hon 500 va boi cua 50");
		   }
	   }
	   else if(a==2){
	   	int sotien;
			printf ("Nhap so tien ban muon rut: ");
			scanf ("%d", &sotien);
			if (sotien%50==0 && sotien<400)
			{
			    char ans = 'y';
			 	printf ("Giao dich nay mat phi, ban co muon tiep tuc khong (y or n): ");
				fflush(stdin);
				scanf ("%c", &ans);
				int tienphi = 5;
				int sodu = 500;
				if (ans == 'y')
				{
					printf ("So du con lai la: %d", sodu - sotien - tienphi );
				}
				else{
					printf ("Cam on ban da su dung dich vu!");
				}
			}
			else{
				 printf ("Ban can nhap so tien la boi cua 50 va nho hon 400 trieu");
			}
	    }
		if(a==3)
		{
				int sodu =500;
			printf ("So du cua ban la: %d", sodu);
		  } 
		  if(a==4)
		  {
		  	printf("cam on ban da su dung dich vu");
		   } 
	}
	
	
	return 0;
}
