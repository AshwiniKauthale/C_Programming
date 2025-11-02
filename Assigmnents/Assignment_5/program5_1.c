#include<stdio.h>

void CheckEvenOdd(int num)
{
    if((num % 2)==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is Odd");
    }
}

int main()
{
    int Number = 0;

    printf("Enter number :");
    scanf("%d",&Number);

    CheckEvenOdd(Number);

    return 0;
}