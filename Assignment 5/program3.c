#include<stdio.h>


int CheckLeapYear(int iYer)
{
    if((iYer%2==0 && iYer%100!=0 )|| (iYer%400==0))
    {
        printf("%d it is Leap Year",iYer);
    }
    else
    {
        printf("%d it is not Leap Year",iYer);
       
    }
   
}

int main()
{
    int iYear=0;
    printf("Enter Year:");
    scanf("%d",&iYear);
    CheckLeapYear(iYear);
    return 0;
}