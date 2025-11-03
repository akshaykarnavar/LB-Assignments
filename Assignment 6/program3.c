#include<stdio.h>
#include<stdbool.h>

 bool CheckEqual(int iNo1,int iNo2)
 {
    return(iNo1==iNo2);
 }

int main()
{
    int iValue1=0, iValue2=0;
    bool bRet=false;
    printf("Enter Number:");
    scanf("%d %d",&iValue1,&iValue2);
    bRet=CheckEqual(iValue1,iValue2);

    if (bRet==true)
    {
        printf("Number Equal");
    }
    else{
          printf("Number is NotEqual");
    }
    return 0;

}