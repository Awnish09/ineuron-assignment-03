
#include<stdio.h>
#include<conio.h>

int main()
{
    int a=12, b;
    b=a;
    b%=2;
    if(b==0)
        printf("%d is even.\n",a);
    else
        printf("%d is odd.",a);

    getch();

    return 0;
}
