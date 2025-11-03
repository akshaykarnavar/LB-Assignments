#include<stdio.h>

void FactorRev(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo/2;iCnt>=0;iCnt--)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);

        }

    }
   
}



int main()
{
    int iValue=0;
 
    printf("Enter the Number:");
    scanf("%d",&iValue);

    FactorRev(iValue);


    return 0;
}