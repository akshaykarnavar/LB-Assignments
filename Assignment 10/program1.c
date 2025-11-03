#include<stdio.h>

double CircleArea(float fRadius)

{
    float PI=3.14;
    double dArea=0;
    dArea=PI*fRadius*fRadius;
    return dArea;


}
 //time complexity O(1)
int main()
{

    float fValue=0;
    double dRet=0;
    printf("Enter Radius:");
    scanf("%f",&fValue);
    dRet=CircleArea(fValue);
    printf("Area of Circle:%f",dRet);
    return 0;
}