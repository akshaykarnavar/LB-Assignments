#include<stdio.h>
void DisplayPattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;

    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("* ");

    }
     for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("# ");

    }
    

    //time complexity O(n)
}


int main()
{
    int iValue=0;
    printf("Enter Number");
    scanf("%d",&iValue);
    DisplayPattern(iValue);
    return 0;
}