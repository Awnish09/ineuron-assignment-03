
#include<stdio.h>
#include<conio.h>

int main()
{
    float cp, sp, p;
    printf("Enter the cost price and the selling price of the item.\n");
    scanf("%f %f",&cp,&sp);

    if(sp>cp)
    {
        p=(sp-cp)/100*cp;
        printf("Profit percentage is %f",p);
    }
    else
    {
        p=(cp-sp)/100*cp;
        printf("Loss percentage is %f",p);
    }
    getch();

    return 0;
}
