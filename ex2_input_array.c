#include <stdio.h>
int main()
{
    int a[10];
    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("Please enter a[%d]= ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The array that you have just entered is: ");
    for (i = 0; i <= 9; i++)
        printf("%d ", a[i]);
    printf("\nThe reverse array is: ");
    for (i = 9; i >= 0; i--)
        printf("%d ", a[i]);
    int max = a[0], min = a[0];
    double avg = a[0];
    for (i = 1; i <= 9; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
        avg += a[i];
    }
    avg /= 10;
    printf("\nMax= %d, Min= %d, Average= %f\n", max, min, avg);
    return 0;
}