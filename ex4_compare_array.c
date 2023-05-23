#include <stdio.h>

int compare_arrays(int arr1[], int arr2[], int size)
{
    int i,count;
    for (i=0;i<size;i++)
    {
        if (arr1[i]!=arr2[i]) return 0;
    }   
    return 1;
}
int inputarray(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("a[%d]= ",i+1);
        scanf("%d",&arr[i]);
    }
}
int main ()
{
    int size;
    int arr1[size], arr2[size];
    printf("please enter the size of 2 array: ");
    scanf("%d",&size);
    printf("please enter first array: \n");
    inputarray(arr1,size);
    printf("please enter second array: \n");
    inputarray(arr2,size);
    if (compare_arrays(arr1,arr2,size)) printf("Two array are the same totally \n");
    else printf("Two arrays are different \n");
    return 0;
}