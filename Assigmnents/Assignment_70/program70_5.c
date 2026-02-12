//////////////////////////////////////////////////////////
//
//      Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//    Function Name :    Mult
//    Input :            integer
//    Output :           integer
//    Description :      Used to find out multiplication of the digits  using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             09/02/2026
//
//////////////////////////////////////////////////////////


int Mult(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    } 
    
    if(iNo < 10)
    {
        return iNo;
    }
    else
    {
        return (iNo % 10) * Mult(iNo / 10);
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

    iRet = Mult(iNo);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}