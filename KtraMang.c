#include <stdio.h>

void nhapMang( int arr[], int n)
{
    for(int i= 0 ; i < n; i++)
    {
        printf("Nhap phan tu arr1[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

void xuatMang( int arr[], int n)
{
    for(int i= 0 ; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int isEqual(int arr1[], int arr2[], int m, int n)
{
    int a;
    if(m >= n) a = m;
    else a = n;

    int flat = 1;
    for( int i  = 0; i < a; i++)
    {
        if((sizeof(arr1) == sizeof(arr2)) && (arr1[i] == arr2[i]))
        {
            flat = 1;
        }
        else
        {
            flat = 0;
            break;
        }
    }

    if(flat == 1) return 1;
    else return 0;
}


int main()
{
    int n;
    printf("Nhap so luong phan tu mang 1: ");
    scanf("%d", &n);

    int m;
    printf("Nhap so luong phan tu mang 2: ");
    scanf("%d", &m);

    // khai bao cap paht dong

    //int *a = (int *)malloc(n * sizeof(int *));
    //int *b = (int *)malloc(m * sizeof(int *));
    int arr1[n];
    int arr2[m];

    nhapMang(arr1, n);
    nhapMang(arr2, m);


    printf("%d",isEqual(arr1, arr2, n,m));

}



