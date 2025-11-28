
#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0;
    int iCountCapital = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else
        {
            iCountSmall++;
        }
        str++;
    }
    printf("Number of small character are : %d",iCountSmall);
    printf("Number of capital character are : %d",iCountCapital);

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    CountAll(Arr);

    return 0;
}