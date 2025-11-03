#include<stdio.h>

double FtoC(float fNo)
{
    double fConvetor;
    fConvetor=((fNo-32)*(5.0/9.0));
    return fConvetor;
}

 //time complexity (1)

int main()
{
    float fValue=0.0f;
    double dRet=0.0f;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet=FtoC(fValue);
    printf("Fahrenheit coverted in to Celcius is:%f",dRet);

    return 0;
}