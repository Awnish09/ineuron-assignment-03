
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter a number.\n");
    scanf("%d",&a);

    if(a%3==0 && a%2==0)
        printf("%d is divisible by both 3 and 2.",a);
    else
        printf("%d not divisible by both 3 and 2.",a);
    getch();

    return 0;
}
