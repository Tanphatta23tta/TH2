#include <stdio.h>
  
//H�m nh?p m?ng
void input(int a[], int *n){ //*n l� truy?n v�o tham tr?(Tham chi?u trong c++) v?i m?c ��ch n sau khi tho�t kh?i h�m v?n gi? ��?c gi� tr? khi b? thay �?i trong h�m
    printf("Nhap n: ");
    scanf("%d", n); //V? n l� 1 con tr? n�n ta kh�ng c?n &n
    printf("\n---NHAP MANG----\n");
    int i;
    for(i = 0; i< *n;i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
//H�m s?p x?p m?ng
void InterchangeSort(int a[], int n){  
   int i,  j;
    for (i = 0; i < n - 1; i++)
    {
      //j s? ��?c duy?t t? v? tr� c?a ph�n t? ch�a s?p x?p t?i cu?i m?ng
        for (j = i + 1; j < n; j++)
        {
         //N?u ph?n t? �ang ki?m tra(a[i]) l?n h�n ph?n t? khi ta duy?t m?ng �? ki?m tra(a[j])
             if(a[i] > a[j]) 
            {
               //Ta �?o v? tr� c?a 2 ph?n t?
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
 
//H�m in ra m?ng
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[1000]; //Khai m?ng g?m t?i �a 1000 ph?n t?
    int n; //Khai bao n
 
    input(arr, &n);
    InterchangeSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
