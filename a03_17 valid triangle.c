
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    printf("Enter the sides of the triangle.\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b)
        printf("%Its a valid triangle.");
    else
        printf("%Its not a valid triangle.");

    getch();

    return 0;
}
