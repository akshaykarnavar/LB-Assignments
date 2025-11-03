#include<stdio.h>


int FindMax(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
       return iNo2;
    }
   
}

int main()
{
    int iValue1=0, iValue2=0;
    int Result=0;
    printf("Enter 1st Numbers:");
    scanf("%d",&iValue1);
    printf("Enter 2nd Numbers:");
    scanf("%d",&iValue2);


    Result=FindMax(iValue1,iValue2);
    printf("larger Number is :%d\n",Result);
    return 0;
}