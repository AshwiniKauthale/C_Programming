#include<stdio.h>

void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)   // Shorthand assignment operator
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
    // Time Complixity : N

int main()
{
    int iValue = 0;

    printf("Please enter frequancy : ");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}