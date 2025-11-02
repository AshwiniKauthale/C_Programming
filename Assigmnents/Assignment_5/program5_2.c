#include<stdio.h>

int FindMax(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int num1,num2,result;

    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    result = FindMax(num1,num2);
    printf("Maximum is: %d\n",result);
    return 0;
}