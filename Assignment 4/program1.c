#include<stdio.h>

int MultiFactor(int iNo)
{
    int iCnt=0;
    int Multiplication=1;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            Multiplication=Multiplication*iCnt;  

        }

    }
    return Multiplication;
}



int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=MultiFactor(iValue);
    printf("%d",iRet);

    return 0;
}