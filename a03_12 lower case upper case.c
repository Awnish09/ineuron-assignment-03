
#include<stdio.h>
#include<conio.h>

int main()
{
    char a;
    printf("Enter any alphabet.\n");
    scanf("%c",&a);

    if(a>='a' && a<='z')
        printf("%c is in lower case.",a);
    else if(a>='A' && a<='Z')
        printf("%c is in upper case.",a);
    getch();

    return 0;
}
