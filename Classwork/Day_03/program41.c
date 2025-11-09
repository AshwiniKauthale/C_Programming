#include<stdio.h>

void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 2; iCnt <= iNo; iCnt +=2)   // Shorthand assignment operator
        {
            printf("%d\t",iCnt);
        }
    }
    // Time Complixity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Please enter frequancy : ");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}