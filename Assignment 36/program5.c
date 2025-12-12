#include<stdio.h>
#include<string.h>

 int StrUprX(char str[])

{
    int icount=0;

    while(*str!='\0')
    {
        if(*str==' ')
        {
        icount++;
         
        }
        str++; 
    }
   return icount;
}

int main()
{
    int iRet=0;
    char arr[30];

    printf("Enter The String:");
    scanf("%[^'\n']s",arr);

    iRet=StrUprX(arr);
    printf("%d",iRet);

   

    return 0;
}