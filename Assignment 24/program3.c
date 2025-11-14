#include<stdio.h>
#include<stdlib.h>


int MaxMinDiff(int Arr[],int iSize)
{   
    int iCnt=0;
    int iLarge=Arr[0];
    int iSmall=Arr[0];
    for(iCnt=1;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]>iLarge)
       {
        iLarge=Arr[iCnt];
       }
       if(Arr[iCnt]<iSmall)
       {
        iSmall=Arr[iCnt];
       }
       
    
    }
    return iLarge-iSmall;
}

int main()
{
    int iLength=0,iCnt=0,iRet=0;
    int *p=NULL;

    printf("Enter number of Element in array:\n");
    scanf("%d",&iLength);
    p=(int*)malloc(iLength*sizeof(int));

    if(NULL==p)
    {
        printf("Unable to allocate the Memory");
        return -1;
    }


    printf("Enter the  Element in Array\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("Enter Element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=MaxMinDiff(p,iLength);
    printf("%d",iRet);
  
   
   
    free(p);
    return 0;
}    