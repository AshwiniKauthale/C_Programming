#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iAns =0, iAns1 = 0, iAns2 = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iAns1 = iAns1+iCnt;

        }
    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iAns2 = iAns2+iCnt;

        }
    }
    iAns = iAns2 - iAns1;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}