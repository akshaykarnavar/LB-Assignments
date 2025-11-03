#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iConvetor=0;
    iConvetor=iNo*1000;
    return iConvetor;
}

 //time complexity O(1)

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Distance in Km:");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("Distance in Meter is:%d",iRet);

    return 0;
}