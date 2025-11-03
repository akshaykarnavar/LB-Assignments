#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    
    for(iCnt=-4;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue=0;
    printf("Enter the Number You want to Print:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}