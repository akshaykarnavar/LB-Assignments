#include<stdio.h>

int EvenFactor(int iNo)
{
     if(iNo<0)
    {
        iNo=-iNo;

    }
    int iCnt=0 ,iMult=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    { 
        if(iCnt%2==0)
        {
            iMult=iMult*iCnt;

        }
     

    }
    return iMult;
}

 //time complexity O(n)

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=EvenFactor(iValue);
    printf("%d",iRet);

    return 0;
}