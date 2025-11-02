#include<stdio.h>

int main()
{
    char cName[30];
    printf("Please Enter full name \n");
    scanf("%[^\n]s",&cName);

    printf("Your name is %s",cName);

    return 0;
}