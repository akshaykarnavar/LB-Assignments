#include<stdio.h>
#include<stdlib.h>


void Range(int p[],int iSize,int iStart,int iEnd)
{   
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if((p[iCnt]>iStart)&&(p[iCnt]<iEnd))
       {
        printf("Element from iStart to iEnd:%d\n",p[iCnt]);

       }
       
    
    }
}

int main()
{
    int iLength=0,iCnt=0,iValue1=0,iValue2=0;
    int *p=NULL;

    printf("Enter number of Element in array:\n");
    scanf("%d",&iLength);
    p=(int*)malloc(iLength*sizeof(int));

    if(NULL==p)
    {
        printf("Unable to allocate the Memory");
        return -1;
    }

    printf("Enter Starting of Number\n");
    scanf("%d",&iValue1);

    printf("Enter Ending of the Number \n");
    scanf("%d",&iValue2);

    printf("Enter the  Element in Array\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("Enter Element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Range(p,iLength,iValue1,iValue2);
  
   
   
    free(p);
    return 0;
}    