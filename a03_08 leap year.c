
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter a year to check whether its leap year or not.\n");
    scanf("%d",&a);

    if(a%100)
    {
        if(a%4)
            printf("%d is not a leap year.",a);
        else
            printf("%d is a leap year.",a);
    }
    else
    {
        if(a%400)
            printf("%d is not a leap year.",a);
        else
            printf("%d is a leap year.",a);
    }

    getch();

    return 0;
}
