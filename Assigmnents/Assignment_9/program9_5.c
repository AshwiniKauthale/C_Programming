#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iAns = 0;
    int iAns1 = 0;
    iAns1 = 1;
    int iAns2 = 0;
    iAns2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    else if(iNo == 0)
    {
        return 1;
    }
    else 
    {
        for(int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2)==0)
            {
                iAns1 = iAns1 * iCnt;
            }
            
        }
        for(int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2)!=0)
            {
                iAns2 = iAns2 * iCnt;
            }
            
        }
        iAns = iAns1 - iAns2;
        return iAns;
    }
    
    
}

// Time Complixity = O(N)

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Odd Factorial of number is %d", iRet);
    return 0;
}