#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel(char cValue)
{
    if(cValue == 'a' ||cValue == 'e' ||cValue == 'i' ||cValue == 'o' ||cValue == 'u' ||
        cValue == 'A' ||cValue == 'E' ||cValue == 'I' ||cValue == 'O' ||cValue == 'U' )
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}