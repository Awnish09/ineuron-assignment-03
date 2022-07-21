
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter the marks obtained in following subjects.\n");
    printf(" Englis    - ");
    scanf("%d",&a);
    printf(" Hindi     - ");
    scanf("%d",&b);
    printf(" Maths     - ");
    scanf("%d",&c);
    printf(" Science   - ");
    scanf("%d",&d);
    printf(" S.Science - ");
    scanf("%d",&e);

    if(a<33 || b<33 || c<33 || d<33 || e<33)
        printf("You have failed.");
    else
        printf("You have passed.");
    getch();

    return 0;
}
