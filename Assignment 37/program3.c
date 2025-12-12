#include <stdio.h>

int AlphaCount(char str[], char Ch)
{
    int iCnt = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ' ')  // skip spaces
        {
            iCnt++;
            continue;
        }

        if (str[iCnt] == Ch)
        {
            return iCnt;   // return the index of first match
        }

        iCnt++;
    }

    return -1;  // moved OUTSIDE the loop
}

int main()
{
    char Arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String:");
    scanf("%[^'\n']s", Arr);

    printf("Enter the Alphabet to Check:");
    scanf(" %c", &cValue);

    iRet = AlphaCount(Arr, cValue);
    printf(" Index of Character is:%d", iRet);

    return 0;
}
