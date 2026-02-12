//////////////////////////////////////////////////////////
//
//      Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//    Function Name :    Min
//    Input :            integer
//    Output :           integer
//    Description :      Used to find out minimum digit from number using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             09/02/2026
//
//////////////////////////////////////////////////////////

int Min(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo < 10)
    {
        return iNo;
    }

    int iDigit = iNo % 10;

    int iMinOfRest = Min(iNo / 10);

    if (iDigit < iMinOfRest)
    {
        return iDigit;
    }
    else
    {
        return iMinOfRest;
    }
}

//////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("Minimum number is : %d\n",iRet);

    return 0;
}