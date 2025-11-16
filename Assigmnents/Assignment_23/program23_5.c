#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0,iProduct = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2)  == 1)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Product(ptr,iSize);

    if(iRet == 1)
    {
        printf("Product is : 0");
    }
    else
    {
        printf("Product is : %d",iRet);
    }

    free(ptr);

    return 0;
}