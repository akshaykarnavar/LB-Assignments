#include<stdio.h>

int CountCapital(char str[])
{
     int count=0;
    
    
   
    while(*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
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

    iRet=CountCapital(Arr);
    printf("%d",iRet);

    return 0;

}