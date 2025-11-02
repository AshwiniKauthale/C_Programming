#include<stdio.h>



int CountDiff(int iNo)
{
    int iDigit  = 0;
    int iAns = 0;
    int iSum = 0;
    int iSub = 0;

    while(iNo != 0)
    {
        
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit;
        }
        else
        {
            iSub = iSub + iDigit;
        }
        iNo = iNo / 10;
    }
    iAns = iSum - iSub;
    return iAns;
}

// Time Complixity = O(N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}