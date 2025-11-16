#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] > 99 && Arr[iCnt] < 1000) ||( Arr[iCnt] < -99 && Arr[iCnt] > -1000))
        {
            printf("%d\n",Arr[iCnt]);
        }
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

    Digits(Ptr,iLength);

    free(Ptr);

    return 0;
}