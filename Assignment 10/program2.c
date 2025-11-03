#include<stdio.h>

double AreaOfRect(float fHight,float fWeight)

{

    double dArea=0;
    dArea=fHight*fWeight;
    return dArea;


}
 //time complexity O(1)
int main()
{

    float fValue1=0,fValue2=0;
    double dRet=0;
    printf("Enter Weight:");
    scanf("%f",&fValue1);
    printf("Enter Hight:");
    scanf("%f",&fValue2);

    dRet=AreaOfRect(fValue1,fValue2);
    printf("Area of Rect:%f",dRet);
    return 0;
}