#include<stdio.h>

void RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }

    if((iStart && iEnd) < 0)
    {
        printf("Invalid range");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}

// Time Complixity = O(N)

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeSum(iValue1,iValue2);

    return 0;
}