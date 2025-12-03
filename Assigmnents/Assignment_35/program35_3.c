///////////////////////////////////////////////////////////////////
//
//  Required Header file
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////


//
//  Function Name : Difference
//  Description :   Count difference of small character and capital character from string
//  Input :         Character
//  Output :        integer
//  Author :        Ashwini Vishnu Kauthale
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCountSmall = 0;
    int iCountCapital = 0;
    int iAns = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        *str++;
    }
    iAns = iCountSmall - iCountCapital;
    if(iAns < 0)
    {
        iAns = -iAns;
    }
    return iAns;
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for Java Application
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    iRet = Difference(Arr);
    printf("difference between small and capital character are : %d\n",iRet);

    return 0;

}

////////////////////////////////////////////////////////////////////
//
//           Input         Output
//
//          MarvellOUS      2
//          HEllO           1
//
////////////////////////////////////////////////////////////////////

