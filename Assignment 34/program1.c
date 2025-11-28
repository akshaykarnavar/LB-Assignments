#include<stdio.h>

void DisplayASCII_table()
{
    int iCnt=0;
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("ASCII: %d Char: %c Hex: %x Oct: %o\n ",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII_table();
    return 0;
}