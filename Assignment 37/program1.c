#include <stdio.h>
#include<stdbool.h>

bool CheckChar(char str[],char Ch)
{
    while(*str!='\0')
    {
        if(*str==Ch)
        {
            return true;
        }
        str++;   
    }
    return false; 
}

int main()
{
    char Arr[50];
    char cValue='\0';
   
    bool bRet=false;

    printf("Enter the String:");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Alphabet to Check:");
    scanf(" %c",&cValue);

    bRet=CheckChar(Arr,cValue);
    if(bRet==true)
    {
        printf("Character is present in string.\n");
    }
    else
    {
        printf("Character is NOT present in string.\n");
    }

    return 0;
}