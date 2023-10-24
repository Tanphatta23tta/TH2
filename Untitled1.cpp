#include<stdio.h>
#include<conio.h>
void Xuat();
void Max();
void Tich();
void timx();
void SX();
void Xoa();



	int a[10],i,n,max,tich,c,k,tam,x;
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
		timx();
	printf("\n Sau khi sap xep ");

	SX();
	Xuat();
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
void timx()
{
	printf("\n Nhap x can tim trong mang: ");
	scanf("%d",&x);
	{
		for (i=0;i<n;i++)
		if (a[i]==x)
		printf("\n X can tim a[%d] ",i);
	}
}
void SX()
{
	int tam,i,j;
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(a[i]>a[j])
	{	
		tam=a[i];
		a[i]=a[j];
		a[j]=tam;
	}
}

	void Xoa()
{
	
		printf("\n Nhap x can xoa: ");
		scanf("%d",&k);
		
	{
	printf("\n Mang sau khi xoa di %d la: ",k);
	for (i=0;i<n;i++)
	if (a[i]== k)
	printf("");
	else
	printf("\n a[%d]=%d",i,a[i]);
    }

	
}

	
