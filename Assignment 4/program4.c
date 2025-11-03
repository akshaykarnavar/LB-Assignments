#include<stdio.h>

int SumNonFactorRev(int iNo)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSum+=iCnt;
        

        }

    }
    return iSum;
   
}

int main()
{
    int iValue=0;
    int iRet=0;
 
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=SumNonFactorRev(iValue);
    printf("%d",iRet);


    return 0;
}