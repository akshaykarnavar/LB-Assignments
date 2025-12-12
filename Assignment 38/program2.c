#include<stdio.h>

void StrCpyX(char *Src,char *Dest)
{
    while(*Src!='\0')
    {
        if(*Src !=' ')
        {
            *Dest=*Src;
            Dest++;
            
        }
        Src++;

    }
    *Dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    StrCpyX(Arr, Brr);

    printf("%s", Brr);

    return 0;
}
