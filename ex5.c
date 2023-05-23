#include <stdio.h>

int main ()
{
    int a[5][4];
    int i,j;
    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Please enter a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}