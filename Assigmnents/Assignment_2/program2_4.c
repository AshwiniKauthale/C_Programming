#include<stdio.h>

void Display(int iNo, int iFrequancy)
{
    int iCnt = 0;
    if(iFrequancy < 0)
    {
        iFrequancy = -iFrequancy;
    }

    for(iCnt = 1; iCnt <= iFrequancy; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Feequancy : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}