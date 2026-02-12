//////////////////////////////////////////////////////////
//
//      Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//    Function Name :    Max
//    Input :            integer
//    Output :           integer
//    Description :      Used to find out maximum digit from the number  using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             09/02/2026
//
//////////////////////////////////////////////////////////

int iMax = 0;

void Max(int iNo)
{
    static int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit >= iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
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

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Max(iValue);

    printf("Maximun number is : %d\n",iMax);

    return 0;
}