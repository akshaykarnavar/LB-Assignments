#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch )
{
   return((ch>='0'&&ch<='9'));
   

}

int main()
{

    char cValue='\0';
    bool bRet=false;
    printf("Enter the Character:");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet==true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");

    }








    return 0;
}