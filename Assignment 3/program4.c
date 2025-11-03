#include<stdio.h>

void  DisplayConvert( char cVal)
{
 
    if(cVal>='A'&& cVal<='Z')
    {
        printf("%c",cVal + 32);

    }
    else if(cVal>='a'&& cVal<='z')
    {
          printf("%c",cVal - 32);

    }
   

}
int main()
{
    char cValue='\0';
    printf("Enter the Character: ");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}