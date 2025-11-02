#include<stdio.h>



int MultDigits(int iNo)
{
    int iDigit  = 0;
    int iAns = 0;
    iAns = 1;

    while(iNo != 0)
    {
        
        iDigit = iNo % 10;
        if((iDigit != 0))
        {
            iAns = iAns * iDigit;
        }
        iNo = iNo / 10;
    }
    return iAns;
}

// Time Complixity = O(N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}