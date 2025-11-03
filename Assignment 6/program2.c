#include<stdio.h>
#include<stdbool.h>

 bool CheckGreater(int iNo)
 {
    return(iNo>100);
 }

int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter Number:");
    scanf("%d",&iValue);
    bRet=CheckGreater(iValue);

    if (bRet==true)
    {
        printf("%d is Greater Number",iValue);
    }
    else{
          printf("%d is Smaller Number",iValue);
    }
    return 0;

}