///////////////////////////////////////////////////////////////////
//
//  Required Header file
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>


////////////////////////////////////////////////////////////////////


//
//  Function Name : CountChar
//  Description :   Accept the string and one character and display that character count
//  Input :         String
//  Output :         int
//  Author :        Ashwini Vishnu Kauthale
//  Date :          01/12/2025
//
////////////////////////////////////////////////////////////////////

int CountChar(char str[],char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for Java Application
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Chracter frequency is %d:",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//           Input           Check      Output
//
//          MarvellouS         l          2
//
////////////////////////////////////////////////////////////////////

