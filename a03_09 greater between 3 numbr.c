
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers.\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is greatest among all three",a);
        else
            printf("%d is greatest among all three",c);
    }
    else
    {
        if(b>c)
            printf("%d is greatest among all three",b);
        else
            printf("%d is greatest among all three",c);
    }

    getch();

    return 0;
}
