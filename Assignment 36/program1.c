#include<stdio.h>
#include<string.h>

 void StrlwX(char str[])

{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;

        }
         str++;

    }

}

int main()
{

    char arr[30];

    printf("Enter The String:");
    scanf("%[^'\n']s",arr);

    StrlwX(arr);

    printf("Modifide String is:%s",arr);

    return 0;
}