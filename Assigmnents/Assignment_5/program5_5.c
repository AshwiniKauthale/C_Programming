#include<stdio.h>

int FindLargest(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int num1,num2,num3,result;

    printf("Enter three numbers :");
    scanf("%d %d %d",&num1,&num2,&num3);

    result = FindLargest(num1,num2,num3);
    printf("Largest number is: %d\n",result);
    return 0;
}