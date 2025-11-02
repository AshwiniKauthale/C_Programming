#include<stdio.h>

int count_factors(int number)
{
    int iCnt = 0, iCount = 0;


    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

// Time Complixity = O(N/2)

int main()
{
    int number = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&number);

    iRet = count_factors(number);
    printf("Total positive factors %d",iRet);
    return 0;
}