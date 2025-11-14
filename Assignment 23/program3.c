#include<stdio.h>
#include<stdlib.h>


int LastOcc(int p[],int iSize,int iNO)
{   //// other Apporach is revesre the loop
    //// and this
    int iCnt=0,ilastndex=-1;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(p[iCnt]==iNO)
       {
          ilastndex=iCnt;
       }
    
    }
   return ilastndex;

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
    iRet=LastOcc(p,iLength,iValue);
    if(iRet==-1)
    {
        printf("There is No Such Number%d",iRet);
    }

    else
    {
        printf("Index of That Number Last Occurence is %d",iRet);
    }
   
   
    free(p);
    return 0;
}    