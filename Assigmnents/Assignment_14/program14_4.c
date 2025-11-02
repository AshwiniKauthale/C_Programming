#include<stdio.h>



int CountFour(int iNo)
{
    int iDigit  = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

// Time Complixity = O(N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}