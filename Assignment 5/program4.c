#include<stdio.h>


int CheckNum(int iNo)
{
    if(iNo>0)
    {
        printf("%d it is Positive Number",iNo);
    }
    else if(iNo<0)
    {
        printf("%d it is Negative Number",iNo);
    }
    else
    {
        printf("%d it is Zero",iNo);

    }

   
}

int main()
{
    int inum=0;
    printf("Enter Number:");
    scanf("%d",&inum);
    CheckNum(inum);
    return 0;
}