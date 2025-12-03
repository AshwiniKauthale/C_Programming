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
//  Function Name : ChkSpecial
//  Description :   Check given character is Special character or not
//  Input :         Character
//  Output :        Boolean
//  Author :        Ashwini Vishnu Kauthale
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^'||ch == '&' || ch == '*' )
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special character");
    }
    else
    {
        printf("It is not a special character");
    }
    return 0;

}

////////////////////////////////////////////////////////////////////
//
//           Input         Output
//
//             %            TRUE
//             D            FALSE
//
////////////////////////////////////////////////////////////////////

