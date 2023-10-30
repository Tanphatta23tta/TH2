#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
char s1[50], s2[50], key;
void Nhap();
void Dem();
void Ghep();
void Dao();
int main(){


while(true)
{
system("cls");
printf("************************************\n");
printf("**       THAO TAC TREN CHUOI      **\n");
printf("**   1. Nhap va chuan hoa chuoi   **\n");
printf("**    2. Dem so tu trong chuoi    **\n");
printf("**          3. Ghep chuoi         **\n");
printf("**       4. Kiem tra doi xung     **\n");
printf("**      5. In chuoi dao nguoc     **\n");
printf("**            0. Thoat            **\n");
printf("************************************\n");
fflush(stdin);
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
switch(key)
{
case 1:
fflush(stdin);
//goi ham de thuc hien cong viec tuong ung
Nhap();
printf("\nBam phim bat ky de tiep tuc!");


getch();
break;
case 2:
//goi ham thuc de hien cong viec tuong ung
Dem();
printf("\nBam phim bat ky de tiep tuc!");

getch();
break;
case 3:
	Ghep();
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung

getch();

break;

case 4:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
break;
case 5:
	Dao();
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
getch();
break;
case 0:
exit(1);
default:
printf("\nKhong co chuc nang nay!");
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
}
}
}
void Nhap()
{
	printf("\n Nhap I: ");
	gets(s1);
	printf("\n Nhap II: ");
	gets(s2);
	printf("\n Chuoi I %s",strupr(s1));
	printf("\n Chuoi II %s",strupr(s2));
}
void Dem()
	{
		int lens1,lens2;
		lens1=strlen(s1);
		lens2=strlen(s2);
		printf("\n Chuoi I co %d chu",lens1);
		printf("\n Chuoi II co %d chu",lens2);
	}
void Ghep()
{
	strcat(s1," ");
	strcat(s1,s2);
	printf("\n %s",s1);
}
   void Dao()
	{
	printf("\n  %s ",strrev(s1));
	}
