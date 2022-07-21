
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter a number.\n");
    scanf("%d",&a);

    if(a==0)
        printf("%Its a zero.");
    else if(a>0)
        printf("%d is a positive number.",a);
    else
        printf("%d is a negative number.",a);
    getch();

    return 0;
}
