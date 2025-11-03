#include<stdio.h>

void Accept(int iNo)
{
    int iCent=0;
    for(iCent=1; iCent<=iNo;iCent++)
    {
        printf("*");
    }

}
int main()
{
    int iValue=0;
    iValue=5;
    Accept(iValue);
    return 0;
}