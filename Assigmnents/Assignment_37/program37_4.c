///////////////////////////////////////////////////////////////////
//
//  Required Header file
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>


////////////////////////////////////////////////////////////////////


//
//  Function Name : LastChar
//  Description :   Accept the string and one character and return first occurance of that character 
//  Input :         String
//  Output :         int
//  Author :        Ashwini Vishnu Kauthale
//  Date :          01/12/2025
//
////////////////////////////////////////////////////////////////////

int LastChar(char str[],char ch)
{
    int iCnt = 0, LastOcc = -1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            LastOcc = iCnt;
        }
        iCnt++;
    }
    return LastOcc;
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

    iRet = LastChar(Arr,cValue);

    printf("Last Occurence is : %d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//           Input           Check      Output
//
//          MarvellouS         e         4
//
////////////////////////////////////////////////////////////////////

