#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int p[],int iSize,int iNO)
{   
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(p[iCnt]==iNO)
       {
         return TRUE;
       }
    
    }
    return FALSE;

}

int main()
{
    int iLength=0,iCnt=0,iValue=0;
    BOOL bRet=FALSE;
    int *p=NULL;

    printf("Enter number of Element in array:\n");
    scanf("%d",&iLength);
    p=(int*)malloc(iLength*sizeof(int));

    if(NULL==p)
    {
        printf("Unable to allocate the Memory");
        return -1;
    }

    printf("Enter the Another NO\n");
    scanf("%d",&iValue);

    printf("Enter the  Element in Array\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("Enter Element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet=Check(p,iLength,iValue);
    if (bRet==TRUE)
    {
        printf("NO is Present");
    }
    else
    {
        printf("NO is Absent");
    }

    return 0;
}    