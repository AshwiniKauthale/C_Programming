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
//  Function Name : ChkCapital
//  Description :   Check given character is Capital or not
//  Input :         Character
//  Output :        Boolean
//  Author :        Ashwini Vishnu Kauthale
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z') )
    {
        return TRUE;
    }
    else if((ch >= 'a' && ch <= 'z'))
    {
        return FALSE;
    }
    else
    {
        return -1;
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character");
    }
    else if(bRet == FALSE)
    {
        printf("It is not a capital character");
    }
    else
    {
        printf("It is not a character");
    }
    return 0;

}

////////////////////////////////////////////////////////////////////
//
//           Input         Output
//
//             F            TRUE
//             d            FALSE
//
////////////////////////////////////////////////////////////////////

