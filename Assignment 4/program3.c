#include<stdio.h>

void NonFactorRev(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
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

    NonFactorRev(iValue);


    return 0;
}