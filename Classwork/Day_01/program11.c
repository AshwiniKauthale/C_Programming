/*
    Algorithm

    START
        accept first number as no1
        accept second number as no2
        If the input is negative then convert it into positive
        Perform addition of no1 and no2
        Display the addition on screen
    STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header File
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float,Float
//  Output :        Float
//  Author :        Ashwini Vishnu Kauthale
//  Date :          09/10/2025
//
////////////////////////////////////////////////////////////////////


int AdditionTwoNumbers(
                            float fNo1,                         // First input
                            float fNo2                          // Second Input
                        )
{
    float fSum = 0.0f;                                          // To store result

    if(fNo1 < 0.0f)                                             // Updater
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                             // Updater
    {
        fNo2 = -fNo2;
    }
    
    fSum = fNo1 + fNo2;                                         // Businss Logic
    return fSum;
}   // End of AdditionTwoNumbers

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the Application
//
////////////////////////////////////////////////////////////////////


int main()
{
    float fValue1 = 0.0f, fValue2 =0.0f;                        //To accept user input
    float fRet = 0.0f;                                          // To store the result

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);                 // Method call
    
    printf("Addition is : %f\n",fRet);

    return 0;
}   //End of main

////////////////////////////////////////////////////////////////////
//
//Testcases Successfully handle by the application
//
//  Input : 10.5    Input : 3.2    Output : 13.7
//  Input : -10.5   Input : 3.2    Output : 13.7
//  Input : 10.5    Input : -3.2   Output : 13.7
//  Input : 10.5    Input : 0,0    Output : 13.7
//
////////////////////////////////////////////////////////////////////
