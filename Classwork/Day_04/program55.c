#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0, iFrequancy = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequancy++;
            break;                     // Optimization
        }
    }
    if(iFrequancy == 0)            // No Factor
    {
        return true;
    }
    else                           // At least one factor
    {
        return false;
    }
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


/*
    Time complixity : for Prime = N/2
    Time complixity : for non prime = either 1 or 2


*/