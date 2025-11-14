#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt=0,iCOUNT=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
        iCOUNT++;
        }
    }
    return iCOUNT;
}

int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *p=NULL;

    printf("Enetr N Element in Array:\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

        if(NULL==p)
    {
        printf("Unable to Allocate the Memory");
        return -1;
    }

    printf("Enetr the Element in Array one ny one:\n");
    for (iCnt= 0; iCnt<iSize; iCnt++)
    {
        printf("Enter Element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet=CountEven(p,iSize);
    printf("%d",iRet);

    free(p);
    return 0;
    
}