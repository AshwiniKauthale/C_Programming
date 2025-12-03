///////////////////////////////////////////////////////////////////
//
//  Required Header file
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
# define TRUE 1
# define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////


//
//  Function Name : ChkDidit
//  Description :   Check given character is Digit or not
//  Input :         Character
//  Output :        Boolean
//  Author :        Ashwini Vishnu Kauthale
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    if((ch >= '0' && ch <= '9') )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for Java Application
//
///////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }
    return 0;

}

////////////////////////////////////////////////////////////////////
//
//           Input         Output
//
//             7            TRUE
//             d            FALSE
//
////////////////////////////////////////////////////////////////////

