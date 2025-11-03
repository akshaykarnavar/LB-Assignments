#include<stdio.h>

int FactorDiff(int iNo)
{
    int iCnt=0;
    int iSumfNonFactor=0;
    int iSumFactor=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSumfNonFactor+=iCnt;
    

        }
        else
        {
            iSumFactor+=iCnt;
        }

    }
    return iSumFactor-iSumfNonFactor;
   
}

int main()
{
    int iValue=0;
    int iRet=0;
 
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=FactorDiff(iValue);
    printf("%d",iRet);


    return 0;
}