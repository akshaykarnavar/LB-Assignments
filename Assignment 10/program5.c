#include<stdio.h>

double SqureMeter(int iNo)
{
    double iConvetor=0.0;
    iConvetor=(iNo*0.0929);
    return iConvetor;
}

 //time complexity O(1)

int main()
{
    int iValue=0;
    double dRet=0.0;
    printf("Enter Area in Square Feet:");
    scanf("%d",&iValue);

    dRet=SqureMeter(iValue);
    printf("Distance in Meter is:%f",dRet);

    return 0;
}