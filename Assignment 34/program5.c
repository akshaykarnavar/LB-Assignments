#include<stdio.h>

void Display(char ch)
{
    

        printf("ASCII: %d\n",ch);    
        printf(" Hex: 0X%X\n ",ch);
        printf("Oct: %03o\n ",ch);
    
}

int main()
{
    char cValue='\0';

    printf("Enter the Character:");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}