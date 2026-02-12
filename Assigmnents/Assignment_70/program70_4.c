//////////////////////////////////////////////////////////
//
//      Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//    Function Name :    Fact
//    Input :            integer
//    Output :           integer
//    Description :      Used to find out the factorial of given number using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             09/02/2026
//
//////////////////////////////////////////////////////////

int iFact = 1;

int Fact(int iNo)
{
    if(iNo >= 1)
    {
        iFact = iFact * iNo;
        Fact(--iNo);
    }
}

//////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    Fact(iNo);

    printf("Factorial is : %d\n",iFact);

    return 0;
}