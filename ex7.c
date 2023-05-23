#include <stdio.h>

void split (double num, int *int_part, double *frac_part)
{
    *int_part=(int) num;
    *frac_part=num-*int_part;
}
int main ()
{
    double num=7.89, frac_part;
    int int_part;
    split(num,&int_part,&frac_part);
    printf("Interger part: %d \t Fractuon part: %lf\n",int_part, frac_part);
    return 0;
}