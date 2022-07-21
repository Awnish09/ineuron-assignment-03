
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c, d=0;
    printf("Enter the three values for quadratic equation.\n");
    scanf("%d %d %d",&a,&b,&c);
    d = b*b-4*a*c;

    if(d>0)
        printf("The equation has real and distinct roots.");
    else if(d==0)
        printf("The equation has equal real roots.");
    else
        printf("The equation has imaginary roots.");

    getch();

    return 0;
}
