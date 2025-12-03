///////////////////////////////////////////////////////////////////
//
//  Required Header file
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>


////////////////////////////////////////////////////////////////////


//
//  Function Name : StrCpyToggle
//  Description :   Accept the string from user copy that string in another string by toggling the case
//  Input :         String
//  Output :
//  Author :        Ashwini Vishnu Kauthale
//  Date :          02/12/2025
//
////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
            dest++;
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
            dest++;
        }
        else
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for Java Application
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'}; 

    printf("Enter String :\n");
    scanf("%[^'\n']",Arr,Brr);

    StrCpyToggle(Arr,Brr);
    printf("Updated string is :%s",Brr);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//           Input                     Output
//
//       MARVELLOUS python 2       marvellous PYTHON 2
//
////////////////////////////////////////////////////////////////////

