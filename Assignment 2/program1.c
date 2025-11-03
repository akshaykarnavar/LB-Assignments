#include<stdio.h>

void  Display(int iNo)
{
    int iCent=0;
    iCent=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }   

    while(iCent<=iNo)
    {
        printf(" * ");
        iCent++;
    }

   

}
int main()
{
    int iValue=0;
    printf("Enter the value: ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}