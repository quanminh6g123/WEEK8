#include <stdio.h>
int main ()
{
    int x=3;
    float number=3.4;
    int a = 4;
    char ch ='a';
    printf("Value of x=%d, Address = %x\n",x,&x);
    printf("Value of number=%d, Address = %x\n",number,&number);
    printf("Value of character=%c, Address = %x\n",ch,&ch);
    return 0;
}
