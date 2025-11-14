#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {   
        if(Arr[iCnt]>99 && Arr[iCnt]<999)
        {
            printf("%d\n",Arr[iCnt]);
        }
       
        
    }
}

int main()
{
    int iLength=0,iCnt=0 ,iRet=0;
    int*ptr=NULL;

    printf("Enetr The Element of Array:\n");
    scanf("%d",&iLength);
    ptr=(int*)malloc(iLength*sizeof(int));
    if(NULL==ptr)
    {
        printf("unable to allocate the memory\n");
        return-1;
    }
       printf("Enter the Values:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("Element is%d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

     Digits(ptr,iLength);

   free(ptr);
   return 0;
  




}