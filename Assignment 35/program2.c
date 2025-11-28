#include<stdio.h>

int CountSmall(char str[])
{
     int count=0;
    
    
   
    while(*str!='\0')
    {
        if(*str>='a'&& *str<='z')
        {
        count++;
        }
           str++;

    }
        return count;

}

int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the String:");
    scanf("%[^'\n']s",Arr);

    iRet=CountSmall(Arr);
    printf("%d",iRet);

    return 0;

}