#include <stdio.h>
  
//Hàm nh?p m?ng
void input(int a[], int *n){ //*n là truy?n vào tham tr?(Tham chi?u trong c++) v?i m?c ðích n sau khi thoát kh?i hàm v?n gi? ðý?c giá tr? khi b? thay ð?i trong hàm
    printf("Nhap n: ");
    scanf("%d", n); //V? n là 1 con tr? nên ta không c?n &n
    printf("\n---NHAP MANG----\n");
    int i;
    for(i = 0; i< *n;i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
//Hàm s?p x?p m?ng
void InterchangeSort(int a[], int n){  
   int i,  j;
    for (i = 0; i < n - 1; i++)
    {
      //j s? ðý?c duy?t t? v? trí c?a phân t? chýa s?p x?p t?i cu?i m?ng
        for (j = i + 1; j < n; j++)
        {
         //N?u ph?n t? ðang ki?m tra(a[i]) l?n hõn ph?n t? khi ta duy?t m?ng ð? ki?m tra(a[j])
             if(a[i] > a[j]) 
            {
               //Ta ð?o v? trí c?a 2 ph?n t?
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
 
//Hàm in ra m?ng
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[1000]; //Khai m?ng g?m t?i ða 1000 ph?n t?
    int n; //Khai bao n
 
    input(arr, &n);
    InterchangeSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
