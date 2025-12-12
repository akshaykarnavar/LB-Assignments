#include<stdio.h>

void StrCpyRev(char *Src,char *Dest)
{
    char *end = Src;

    // Go to end of the string
    while(*end != '\0')
    {
        end++;
    }
    end--;  // Move to last character

    // Copy in reverse
    while(end >= Src)
    {
        *Dest = *end;
        Dest++;
        end--;
    }

    *Dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    StrCpyRev(Arr, Brr);

    printf("%s", Brr);

    return 0;
}
