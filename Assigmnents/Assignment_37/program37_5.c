///////////////////////////////////////////////////////////////////
//
//  Required Header file
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>


////////////////////////////////////////////////////////////////////


//
//  Function Name : StrrevX
//  Description :   Accept the string from user reverse that string in place 
//  Input :         String
//  Output :
//  Author :        Ashwini Vishnu Kauthale
//  Date :          01/12/2025
//
////////////////////////////////////////////////////////////////////
void strrevX(char str[])
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for Java Application
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);


    strrevX(Arr);

    printf("Updated string is :%s\n",Arr);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//           Input         Output
//
//            abcd          dcba 
//
////////////////////////////////////////////////////////////////////

