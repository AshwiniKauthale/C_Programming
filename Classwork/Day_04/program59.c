#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2,bFlag = true; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;                     // Optimization
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d Prime number\n",iValue);
    }
    else
    {
        printf("%d Prime not number\n",iValue);
    }

    return 0;
}
