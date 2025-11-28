#include<stdio.h>

int CountSmall(char str[])
{
     int CountSmall=0;
     int CountCapital=0;
    
    
   
    while(*str!='\0')
    {
        if(*str>='a'&& *str<='z')
        {
        CountSmall++;
        }
         else if(*str>='A'&& *str<='Z')
        {
        CountCapital++;
        }
           str++;

    }
        return CountSmall-CountCapital;

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