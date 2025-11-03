#include<stdio.h>
int DollerToINR(int iNo)
{
    int iAns=0;
    iAns=iNo*70;
    return iAns;
    
}
 //time complexity O(1)

int main()
{
    int iValue=0 ,iRet=0 ;
    printf("Enter Number of USD : ");
    scanf("%d",&iValue);
    iRet= DollerToINR(iValue);
    printf("Value in INR is:%d",iRet);

    return 0;
}