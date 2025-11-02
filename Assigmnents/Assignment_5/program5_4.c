#include<stdio.h>

void CheckNumberType(int num)
{
    if(num == 0)
    {
        printf("It is zero");
    }
    else if(num > 0)
    {
        printf("It is positive number");
    }
    else
    {
        printf("It is negative number");
    }
}

int main()
{
    int number;

    printf("Enter number :");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}