#include<stdio.h>


int mulitply(int iNo1,int iNo2,int iNo3)
 {
    int count=1;
    if(iNo1==0 && iNo2==0 && iNo3==0)
    {
        return 0;
    }
     if(iNo1!=0)
    {
        count=count*iNo1;
    }
     if(iNo2!=0)
    {
       count=count*iNo2;
    }
    if(iNo3!=0)
    {
        count=count*iNo3;
    }


    return count;
 }

int main()
{
    int iValue1=0, iValue2=0 ,iValue3=0, iRet=0;
 
    printf("Enter Three Numbers:");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    iRet=mulitply(iValue1,iValue2,iValue3);
    printf("%d",iRet);

    return 0;

}