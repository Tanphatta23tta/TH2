#include<stdio.h>
#include<conio.h>
void Xuat();
void Max();
void Tich();
void SX();



	int a[10],i,n,max,tich,tam,j;
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
	SX();
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
/*
int ktsnt(int n)
{
	int i;
	if(n<2) return 0;
	for (i=2;i<=n;i++)
	if (n%i==0)
	return 0;
	return 1;
}
void dem(int a[],int n)
{
	int densnt=0;
    for(int i=0;i<n;i++)
    {
    	if (kiemtrasnt(a[i])==true)
    	demsnt=demsnt+1;
    }
    printf("\n snt la: %d",demsnt)

}
*/

void SX()
{
	int tam,i,j;
	for(i=0;i<n-1;i++)
	for (j=i+1;i<j;j++)
	if (a[i]>a[j])
	{
		tam=a[i];
		a[i]=a[j];
		a[j]=tam;
	}
	printf("\n mang duoc sap xep: ");
	
	getch();
}

	

	

	
