#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int p[],int iSize,int iNO)
{   
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(p[iCnt]==iNO)
       {
         return iCnt;
       }
    
    }
   return-1;

}

int main()
{
    int iLength=0,iCnt=0,iValue=0, iRet=0;
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
    iRet=FirstOcc(p,iLength,iValue);
    if(iRet==-1)
    {
        printf("There is No Such Number");
    }

    else
    {
        printf("Index of That Number First Occurence is %d",iRet);
    }
   
   
    free(p);
    return 0;
}    