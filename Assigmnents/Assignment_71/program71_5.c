//////////////////////////////////////////////////////////
//
//      Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//    Function Name :    Small
//    Input :            character
//    Output :           integer
//    Description :      Used to reverse the given number using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             09/02/2026
//
//////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    static int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo != 0)
    {
        int iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        Reverse(iNo / 10);
    }

    return iRev;
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

    iRet = Reverse(iValue);

    printf("Reverse number is : %d\n",iRet);

    return 0;
}