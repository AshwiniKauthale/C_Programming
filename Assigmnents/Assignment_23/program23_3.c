#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength,int iNo)
{
    int iCnt = 0,iCount = 0;

    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt]  == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter one number : ");
    scanf("%d",&iValue);

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

    iRet = LastOcc(ptr,iSize,iValue);
    
    if(iRet == -1)
    {
        printf("There is no such number : %d",iRet);
    }
    else
    {
        printf("Last occurance of that number is : %d",iRet);
    }

    free(ptr);

    return 0;
}