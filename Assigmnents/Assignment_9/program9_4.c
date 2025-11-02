#include<stdio.h>

int OddFactorial(int iNo)
{
    int iAns = 0;
    iAns = 1;

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
            if((iCnt % 2)!=0)
            {
                iAns = iAns * iCnt;
            }
            
        }
        return iAns;
    }
    
}

// Time Complixity = O(N)

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial of number is %d", iRet);
    return 0;
}