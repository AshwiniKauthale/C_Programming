#include<stdio.h>

// Dynamic Function

void Display(int iFrequancy)
{
    int iCnt = 0;

    // Filter 
    
    if(iFrequancy < 0)
    {
        printf("Invalid Input");
        return;
    }

    for(iCnt = 1; iCnt <= iFrequancy; iCnt++)
    {
        printf("Jay GAnesh...\n");
    }
}

int main()
{
    int iCount = 0;

    printf("Enter the frequancy : \n");
    scanf("%d",&iCount);

    Display(iCount);

    return 0;
}
