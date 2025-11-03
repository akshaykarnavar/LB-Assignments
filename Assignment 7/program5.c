#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;
    
    for(iCnt=1;iCnt<=5*iNo;iCnt++)
    {
        if(iCnt%iNo==0)
        {
        printf("%d ",iCnt);
        }
    }

}
int main()
{
    int iValue=0;
    printf("Enter the Number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}