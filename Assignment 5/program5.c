#include<stdio.h>


int FindMax(int iNo1,int iNo2,int iNo3)
{
    if(iNo1>iNo2 && iNo1>iNo3)
    {
        return iNo1;
    }
    else if(iNo2>iNo3 && iNo2>iNo1)
    {
       return iNo2;
    }
    else{
        return iNo3;
    }
   
}

int main()
{
    int iValue1=0, iValue2=0, iValue3=0;
    int Result=0;
    printf("Enter 1st Numbers:");
    scanf("%d",&iValue1);
    printf("Enter 2nd Numbers:");
    scanf("%d",&iValue2);
    printf("Enter 3rd Numbers:");
    scanf("%d",&iValue3);


    Result=FindMax(iValue1,iValue2,iValue3);
    printf("larger Number is :%d\n",Result);
    return 0;
}