#include<stdio.h>
#include<stdlib.h>

int Frequancy(int Arr[], int iLength)
{
    int iCnt = 0,iCountSum = 0, iCountDiff = 0,iAns = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountSum++;
        }
        else
        {
            iCountDiff++;
        }
    }
    iAns = iCountSum - iCountDiff;
    return iAns;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements :");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequancy(ptr,iSize);

    printf("Frequancy is : %d",iRet);

    free(ptr);

    return 0;
}