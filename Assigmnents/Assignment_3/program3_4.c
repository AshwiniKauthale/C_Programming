#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(islower(cValue))
    {
        printf("%c\n",toupper(cValue));
    }
    else if(isupper(cValue))
    {
        printf("%c\n",tolower(cValue));
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);


    return 0;
}