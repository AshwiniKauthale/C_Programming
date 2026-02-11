//////////////////////////////////////////////////////////
//
//      Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//    Function Name :    Sum
//    Input :            integer number
//    Output :           integer
//    Description :      Used to summation of the number using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             09/02/2026
//
//////////////////////////////////////////////////////////

int Sum(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if (iNo == 0)
    {
        return 0;
    }
    else
    {
        return (iNo % 10) + Sum(iNo / 10);
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

    printf("Enter the number : ");
    scanf("%d",&iNo);

    iRet = Sum(iNo);

    printf("Summation is : %d\n",iRet);

    return 0;
}