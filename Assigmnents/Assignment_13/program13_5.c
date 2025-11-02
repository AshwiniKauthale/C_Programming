#include<stdio.h>

int sum_even_numbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

// Time Complixity = O(2N)

int main()
{
    int iNumber = 0,iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iNumber);

    iRet = sum_even_numbers(iNumber);
    printf("Sum of N natural numbers %d",iRet);

    return 0;
}