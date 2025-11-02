#include<stdio.h>
#include<stdbool.h>

int Multiply(int iNo1, int iNo2,int iNo3)
{
    int iAns = 0;
    if((iNo1 || iNo2) == 0)
    {
        return iNo3;
    }
    else if((iNo2 || iNo3) == 0)
    {
        return iNo1;
    }
    else if((iNo1 || iNo3) == 0)
    {
        return iNo2;
    }
    else if((iNo1) == 0)
    {
        return iNo2 * iNo3;
    }
    else if((iNo2) == 0)
    {
        return iNo1 * iNo3;
    }
    else if((iNo3) == 0)
    {
        return iNo1 * iNo2;
    }
    else
    {
        iAns = iNo1 * iNo2 * iNo3;
        return iAns;
    }
}

// Time Complixity = O(1)


int main()
{
    int iValue1 = 0, iValue2 = 0,iValue3 = 0,iRet = 0;
    printf("Please enter three number :");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet =Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);
    return 0;
}