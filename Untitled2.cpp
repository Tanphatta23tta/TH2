#include<stdio.h>
#include<conio.h>
void Nhap (int*a,int m, int n);
void Xuat();
void Max();
void Min();

void ktsnt();
void tongsnt();
void timx();
int a[100][100],i,j,n,m,x,tong;
int main()
{
	printf("\n Nhap i: ");
	scanf("%d",&n);
	printf("\n Nhap j: ");
	scanf("%d",&m);
	for (int i=0;i<n;i++)
	for (int j=0;j<m;j++)
	{
		printf("\n nhap a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
	Xuat();
	Max();
	Min();
	
	ktsnt();
	printf("\n co %d phan tu la snt ",x);
    tongsnt();
    printf("\n tong snt: %d ",tong);
    timx();
	
	}
void Xuat()
{
for(i=0;i<n;i++)
  {
  	printf("\n");
  		for(j=0;j<m;j++)
  
  	printf("%d\t",a[i][j]);

	
  }
}
void Max()
{
	int max=a[0][0],i,j;
for (i=0;i<=n;i++)
{
	for(j=0;j<=m;j++)
	if (a[i][j]>=max)
	max=a[i][j];
}
printf("\n Phan tu lon nhat la: %d" , max);
getch();
}
void Min()
{
	int min=a[0][0],i,j;
for (i=0;i<n;i++)
{
	for (j=0;j<m;j++)
	if (a[i][j]<=min)
	min=a[i][j];
}
printf("\n Phan tu nho nhat la: %d" , min);
getch();
}

void ktsnt()
{
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	if (a[i][j]==2||a[i][j]==3||a[i][j]==5||a[i][j]==7)
	x=x+1;
	   if (a[i][j]%2!=0 && a[i][j]%3!=0 &&a[i][j]%5!=0 && a[i][j]%7!=0)
	   x=x+1;
}

void tongsnt()
{
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
	if (a[i][j]==2||a[i][j]==3||a[i][j]==5||a[i][j]==7)
	tong=tong+a[i][j];
	   if (a[i][j]%2!=0 &&a[i][j]%3!=0 &&a[i][j]%5!=0 && a[i][j]%7!=0)
	   tong=tong+a[i][j];
}
void timx()
{
	printf("\n Nhap x can tim trong mang: ");
	scanf("%d",&x);
	{
		for (i=0;i<n;i++)
		for (j=0;j<m;j++)
		if (a[i][j]==x)
		printf("\n X can tim a[%d][%d] ",i,j);
	}
}

