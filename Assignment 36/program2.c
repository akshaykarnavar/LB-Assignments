#include<stdio.h>
#include<string.h>

 void StrUprX(char str[])

{
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;

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

    printf("Modifide String is:%s",arr);

    return 0;
}