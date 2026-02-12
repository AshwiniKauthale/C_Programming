//////////////////////////////////////////////////////////
//
//      Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//    Function Name :    Small
//    Input :            character
//    Output :           integer
//    Description :      Used to count  the number of small character from string  using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             09/02/2026
//
//////////////////////////////////////////////////////////

int Small(char * str)
{
    if(*str == '\0')
    {
        return 0;
    }

    if(*str >= 'a' && *str <= 'z')
    {
        return 1 + Small(str + 1);
    }
    else
    {
        return Small(str + 1);
    }
}

//////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////

int main()
{
    char arr[] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]s",arr);

    iRet = Small(arr);

    printf("Number of small characters are : %d\n",iRet);

    return 0;
}