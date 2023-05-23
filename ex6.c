#include <stdio.h>

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
    int arr1[size];
    printf("please enter the size of 2 array: ");
    scanf("%d",&size);
    printf("please enter first array: \n");
    inputarray(arr1,size);
    printf("%d\n",arr1);
    printf("%d\n",*arr1);
    int *ptr = arr1;
    printf("%d", ptr[1]);
    printf("%d, %d, %d\n", arr1[1],ptr[1],*(ptr+1));
    printf("%d, %d, %d\n", &arr1[1], &ptr[1], ptr+1);
    return 0;
}