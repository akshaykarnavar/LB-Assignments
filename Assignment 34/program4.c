#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch )
{
   return((ch>='!' && ch<='*'));
   

}

int main()
{

    char cValue='\0';
    bool bRet=false;
    printf("Enter the Character:");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

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