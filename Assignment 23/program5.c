#include<stdio.h>
#include<stdlib.h>


int Product(int p[],int iSize)
{   
    int iCnt=0 ,iProduct=1;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if((p[iCnt]%2==1))
       {
        iProduct=iProduct*p[iCnt];
       }
       
    
    }
    return iProduct;
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
    iRet=Product(p,iLength);
    printf("%d",iRet);
  
   
   
    free(p);
    return 0;
}    