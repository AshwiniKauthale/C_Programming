#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[],int iSize)
{
    int iCnt = 0,iDigit = 0,iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = 0;
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt]%10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt]/10;
        }
        printf("%d\t ",iSum);
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *Ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    Ptr = (int *) malloc(iLength * sizeof(int));

    if(NULL == Ptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter elements : ");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Ptr[iCnt]);
    }

    DigitsSum(Ptr,iLength);

    free(Ptr);

    return 0;
}