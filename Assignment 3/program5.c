#include <stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckVowel(char cVal)
{
    if (cVal=='a'||cVal=='e'||cVal=='i'||cVal=='o'||cVal=='u'||cVal=='A'||cVal=='E'||cVal=='I'||cVal=='O'||cVal=='U')
    {
       return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue='\0';
    printf("Enter the Character:");
    scanf("%c",&cValue);
    bool bRet=false;
     bRet=CheckVowel(cValue);
     if(bRet==true)
     {
        printf("it is vowel");

     }
     else
     {
         printf("it is not  vowel");
     }
    return 0;
}
