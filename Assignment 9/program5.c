#include<stdio.h>

int FactorialDiff(int iNo)
{
     if(iNo<0)
    {
        iNo=-iNo;

    }
    int iCnt=0 ,iMult1=1,iMult2=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    { 
        if(iCnt%2==0)
        {
            iMult1=iMult1*iCnt;

        }
        else
        {
             iMult2=iMult2*iCnt;

        }
     

    }
    return iMult1-iMult2;
}

 //time complexity O(n)

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("%d",iRet);

    return 0;
}