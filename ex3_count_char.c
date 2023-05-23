#include <stdio.h>
#define l 26
int main ()
{
    char c='\0';
    int i, count[l]={0};
    printf("Please enter your text: \n");
    c=getchar();
    while (c!='\n'){
        if (c<='z'&& c>='a') ++count[c-'a'];
        c=getchar();
    }
    for (i=0;i<l; ++i)
    {
        if (count[i]>0)
        printf("The letter '%c' appears %d time(s).\n",'a'+i,count[i]);
    }
    /*printf("Enter character: ");
    c=getc(stdin); //nhap ki tu
    printf("Character entered: ");
    putc(c,stdout); //xuat ki tu
    //c=getchar(); putchar (c) cung vay*/
    return 0;
}