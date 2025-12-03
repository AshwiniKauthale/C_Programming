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
//  Function Name : ChkVowel
//  Description :   Check given String contain vowel or not
//  Input :         Character
//  Output :        Boolean
//  Author :        Ashwini Vishnu Kauthale
//  Date :          28/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char str[])
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str== 'o') || (*str == 'u') ||
        (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for Java Application
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string :\n");
    scanf("%[^'\n]s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//           Input         Output
//
//          marvellous       TRUE
//          xyz              FALSE
//
////////////////////////////////////////////////////////////////////

