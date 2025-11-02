#include<stdio.h>

void CheckLeapYear(int year)
{
    if((year % 4) == 0)
    {
        printf("It is leap year");
    }
    else
    {
        printf("It is not leap year");
    }
}

int main()
{
    int year;

    printf("Enter year :");
    scanf("%d",&year);

    CheckLeapYear(year);

    return 0;
}