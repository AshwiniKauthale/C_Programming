#include<stdio.h>
#include<stdbool.h>

float Percentage(int iNo1, int iNo2)
{
    if(iNo2 == 0)
    {
        return 0.0;
    }
    float fAns = 0.0f;
    fAns = ((float)iNo2 / iNo1) * 100;
    return fAns;
}

// Time Complixity = O(1)


int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks :");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks :");
    scanf("%d",&iValue2);

    fRet =Percentage(iValue1,iValue2);

    printf("%f",fRet);
    return 0;
}