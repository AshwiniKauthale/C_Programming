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
//    Description :      Used to display the number using recursion
//    Author :           Ashwini Vishnu Kauthale
//    Data :             08/02/2026
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;
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