#include<stdio.h>

void  PrintEven(int iNo)
{
     if(iNo<=0)
    {
        printf("Invalid number");
     }  

    int iCnt=0;
    for(iCnt=1;iCnt<=2*iNo;iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d\n",iCnt);
        }
    }
   

}
int main()
{
    int iValue=0;
    printf("Enter the value: ");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}