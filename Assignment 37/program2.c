#include <stdio.h>


int AlphaCount(char str[],char Ch)
{
     int iCount=0;
    while(*str!='\0')
    {
       
        if(*str==Ch)
        {
            iCount++;
        }
        str++;   
    }
    return iCount;
    
}

int main()
{
    char Arr[50];
    char cValue='\0';
    int iRet=0;
   
   

    printf("Enter the String:");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Alphabet to Check:");
    scanf(" %c",&cValue);

    iRet =AlphaCount(Arr,cValue);
    printf(" Count of Alphabet is:%d",iRet);
    
    return 0;
}