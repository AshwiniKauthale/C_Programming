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
//  Function Name : Display
//  Description :   Check given character is Capital or not if it is capital then write character from that character to Z
//                  and if it is small display it is reverse order.
//  Input :         Character
//  Output :        Charactes list
//  Author :        Ashwini Vishnu Kauthale
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch >= 'A' && ch <= 'Z') )
    {
        while(ch <= 'Z')
        {
            printf("%c ",ch);
            ch++;
        }
    }
    else if((ch >= 'a' && ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c ",ch);
            ch--;
        }
        ch = 'a';
    }
    else
    {
        printf("Enter the correct character");
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

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;

}

////////////////////////////////////////////////////////////////////
//
//           Input         Output
//
//             Q            Q R S T U V W X Y Z
//             d            d c b a
//
////////////////////////////////////////////////////////////////////

