
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a,&b);
    if(a<b)
        printf("%d is greater.",b);
    else
        printf("%d is greater.",a);

    getch();

    return 0;
}
