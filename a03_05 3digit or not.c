
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, i=0;
    printf("Enter any number to check whether its 3 digits or not.\n");
    scanf("%d",&a);
    b=a;
    if(b!=0)
    {
        b/=10;
        i+=1;
    }
    if(b!=0)
    {
        b/=10;
        i+=1;
    }
    if(b!=0)
    {
        b/=10;
        i+=1;
    }

    if(b==0 && i==3)
        printf("%d is a 3 digits number.",a);
    else
        printf("%d is not a 3 digits number.",a);

    getch();

    return 0;
}
