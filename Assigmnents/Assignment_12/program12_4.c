#include<stdio.h>

int sum_of_factors(int number)
{
    int iCnt = 0, iSum = 0;


    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if((number % iCnt || iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

// Time Complixity = O(N/2)

int main()
{
    int number = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&number);

    iRet = sum_of_factors(number);
    printf("Total positive factors %d",iRet);
    return 0;
}