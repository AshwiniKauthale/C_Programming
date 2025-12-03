///////////////////////////////////////////////////////////////////
//
//  Required Header file
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>


////////////////////////////////////////////////////////////////////


//
//  Function Name : StrCpyCap
//  Description :   Accept the string from user copy that string in another string by converting all small character into capital case
//  Input :         String
//  Output :
//  Author :        Ashwini Vishnu Kauthale
//  Date :          02/12/2025
//
////////////////////////////////////////////////////////////////////

void StrCpyCap(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
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

    StrCpyCap(Arr,Brr);
    printf("Updated string is :%s",Brr);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//           Input                     Output
//
//       Marvellous Python 2       MARVELLOUS PYTHON 2
//
////////////////////////////////////////////////////////////////////

