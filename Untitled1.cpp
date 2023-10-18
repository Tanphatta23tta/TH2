#include<stdio.h>
#include<conio.h>
void Xuat();
void Max();
void Tich();
void Chen();
void Xoa();



	int a[10],i,n,max,tich,c,k;
int main()

{

	printf("\n Nhap phan tu cua mang n: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)

	{
		printf ("\n Nhap a[%d]= ",i);
		scanf ("%d",&a[i]);

	}
	Xuat();
	Max();
	Tich();
	Chen();
	Xoa();
	
	getch();
	
}
	void Xuat()
	
	{
		for (i=0;i<n;i++)
		printf(" \n Phan tu thu a[%d]=%d ",i,a[i]);
	}

void Max()
{
	int max=a[0],i;
for (i=0;i<=n;i++)
{
	if (a[i]>=max)
	max=a[i];
}
printf("\n Phan tu lon nhat la: %d" , max);
getch();
}
void Tich()

{
	int tich=1;
	{
		for (i=0;i<n;i++)
	tich=tich*a[i];
		
	}
	
printf("\n Tich cua phan tu la: %d",tich);
}
void Chen()
{
	printf("\n Nhap x can chen: ");
	scanf("%d",&c);
	c==a[n];
	Xuat();
	printf("\n Phan tu thu a[%d]=%d",n,c);
}

	void Xoa()
{
	
		printf("\n Nhap x can xoa: ");
		scanf("%d",&k);
		
	{
	
	for (i=0;i<n;i++)
	if (a[i]== k)
	printf("");
	else
	printf("\n a[%d]=%d",i,a[i]);
    }

	
}
	
