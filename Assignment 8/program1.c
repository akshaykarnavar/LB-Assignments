#include<stdio.h>

void DisplayNumber(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(iNo<100)
    {
        printf("Medium");
    }
    else
    {
        printf("large");
    }
 //Time Complexity is O(n).
}
int main()
{
    int iValue=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);
    DisplayNumber(iValue);


    return 0;
}
