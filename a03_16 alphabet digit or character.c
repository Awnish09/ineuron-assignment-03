
#include<stdio.h>
#include<conio.h>

int main()
{
    char a;
    printf("Enter any character for the keyboard.\n");
    scanf("%c",&a);

    if(a>'a' && a<'z')
        printf("%Its a lower case alphabet.");
    else if(a>65 && a<90)
        printf("%Its an upper case alphabet.");
    else if(a>='0' && a<='9')
        printf("Its a digit.");
    else
        printf("Its a special character.");
    getch();

    return 0;
}
