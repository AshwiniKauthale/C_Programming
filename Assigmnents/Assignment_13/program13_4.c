#include<stdio.h>

int sum_natural_numbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

// Time Complixity = O(N)

int main()
{
    int iNumber = 0,iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iNumber);

    iRet = sum_natural_numbers(iNumber);
    printf("Sum of N natural numbers %d",iRet);

    return 0;
}