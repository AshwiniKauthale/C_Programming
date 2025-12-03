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
//  Function Name : ChkSmall
//  Description :   Check given character is Small case or not
//  Input :         Character
//  Output :        Boolean
//  Author :        Ashwini Vishnu Kauthale
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    if((ch >= 'a' && ch <= 'z') )
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a small case character");
    }
    else
    {
        printf("It is not a small case character");
    }
    return 0;

}

////////////////////////////////////////////////////////////////////
//
//           Input         Output
//
//             a            TRUE
//             D            FALSE
//
////////////////////////////////////////////////////////////////////

