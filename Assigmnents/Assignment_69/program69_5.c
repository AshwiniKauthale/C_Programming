//////////////////////////////////////////////////////////
//
//      Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//    Function Name :    Display
//    Input :            integer number
//    Output :           Display number in reverse order
//    Description :      Used to display the alphabet using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             08/02/2026
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    static char ch = 'a';
    static int i = 1;

    if(i <= iNo)
    {
        printf("%c\t",ch);
        i++;
        ch++;
        Display(iNo);
    }
}

//////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////

int main()
{
    int iNo = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}