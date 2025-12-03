///////////////////////////////////////////////////////////////////
//
//  Required Header file
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////


//
//  Function Name : DisplaySchedule
//  Description :   Display exam time based on division
//  Input :         Character
//  Output :        String
//  Author :        Ashwini Vishnu Kauthale
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'a' || chDiv == 'A'))
    {
        printf("Your exam at 7 AM");
    }
    else if((chDiv == 'b' || chDiv == 'B'))
    {
        printf("Your exam at 8.30 AM");
    }
    else if((chDiv == 'c' || chDiv == 'C'))
    {
        printf("Your exam at 9.20 AM");
    }
    else if((chDiv == 'd' || chDiv == 'D'))
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Enter correct division");
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

    DisplaySchedule(cValue);

    return 0;

}

////////////////////////////////////////////////////////////////////
//
//           Input         Output
//
//             C            Your exam at 9.20 AM
//             d            Your exam at 10.30 AM
//
////////////////////////////////////////////////////////////////////

