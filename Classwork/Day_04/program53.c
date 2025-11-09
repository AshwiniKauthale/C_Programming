#include<stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0, iFrequancy1 = 0, iFrequancy2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequancy1++;
        }
        else
        {
            iFrequancy2++;
        }
    }
    printf("Number of factors are : %d\n",iFrequancy1);
    printf("Number of non factors are : %d\n",iFrequancy2);
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}