#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength ,int iNO)
{
    int iCnt=0,iCOUNT;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNO)
        {
        iCOUNT++;
        }
       
    }
    return iCOUNT;
}

int main()
{
    int iSize=0,iCnt=0,iRet=0, iValue=0;
    int *p=NULL;

    printf("Enetr N Element in Array:\n");
    scanf("%d",&iSize);

    printf("Enetr Number\n");
    scanf("%d",&iValue);
    


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
    
    iRet=Frequency(p,iSize,iValue);
    printf("%d",iRet);

    free(p);
    return 0;
    
}