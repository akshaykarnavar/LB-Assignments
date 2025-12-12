#include<stdio.h>

void StrUpperX(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        if(*Src >= 'a' && *Src <= 'z')   // if lowercase
        {
            *Dest = *Src - 32;           // convert to uppercase
        }
        else
        {
            *Dest = *Src;                // copy as it is
        }

        Src++;
        Dest++;
    }

    *Dest = '\0';   // end string
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    StrUpperX(Arr, Brr);

    printf("%s", Brr);

    return 0;
}
