#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
    int iCnt=0,iCOUNTEven=0,iCOUNTOdd=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            break;
            
        }
      
    }
    if(iCnt==iLength)
    {
         return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize=0,iCnt=0;
    bool bRet=false;
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
    
    bRet=Check(p,iSize);

    if(bRet==true)
    {
        printf("11 is Present");
    }
    else
     {
        printf("11 is Absent");
    }
   
   
    

    free(p);
    return 0;
    
}