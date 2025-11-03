#include<stdio.h>
#include<stdbool.h>

bool Display(int iNo)
{
   return((iNo%2)==0);

}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter the value: ");
    scanf("%d",&iValue);
    bRet=Display(iValue);
    if(bRet==true)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}