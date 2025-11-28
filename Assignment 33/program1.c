#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch )
{
   return((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'));
   

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