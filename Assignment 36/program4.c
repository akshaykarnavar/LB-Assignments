#include<stdio.h>
#include<string.h>

 void StrUprX(char str[])

{
    while(*str!='\0')
    {
        if((*str>='0')&&(*str<='9'))
        {
            printf("%c",*str);

        }
      
       
         str++;  

    }

}

int main()
{

    char arr[30];

    printf("Enter The String:");
    scanf("%[^'\n']s",arr);

    StrUprX(arr);

   

    return 0;
}