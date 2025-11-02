#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > iCnt)
    {
        printf("*\t");
        iNo--;
    }

}

int main()
{
    int iValue = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}