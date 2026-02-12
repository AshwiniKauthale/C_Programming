//////////////////////////////////////////////////////////
//
//      Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//    Function Name :    Strlen
//    Input :            character
//    Output :           integer
//    Description :      Used to count  the number of character from string  using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             09/02/2026
//
//////////////////////////////////////////////////////////


int Strlen(char * str)
{

    if(*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + Strlen(str + 1);
    }
}

//////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("number of character are : %d\n",iRet);

    return 0;
}