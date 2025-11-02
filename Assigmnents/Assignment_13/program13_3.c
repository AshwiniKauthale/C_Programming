#include<stdio.h>

void print_odd_numbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

// Time Complixity = O(N)

int main()
{
    int iNumber = 0;;

    printf("Enter Number :");
    scanf("%d",&iNumber);

    print_odd_numbers(iNumber);

    return 0;
}