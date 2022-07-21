
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter the number of the month.\n");
    scanf("%d",&a);

    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
        printf("the month has 31 days.");
    else if(a==4 || a==6 || a==9 || a==11)
        printf("The month has 30 days.");
    else
        printf("The month has 28 days.\nAnd 29 days if its leap year.");

    getch();

    return 0;
}
