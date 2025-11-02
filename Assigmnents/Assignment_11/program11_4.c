#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd)
    {
        return -1;
    }

    if((iStart) < 0)
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

// Time Complixity = O(N)

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);
    if((iRet == -1))
    {
        printf("Invalid range");
    }
    printf("Addition is %d",iRet);

    return 0;
}