#include<stdio.h>
void  ReverseTable(int iNo)
{
    int iCnt=0;
    int iTab=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        iTab=iNo*iCnt;
        printf("%d\n",iTab);
      
    }
       
    //Time Complexity is O(n).
    
}

int main()
{
    int iValue=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);
    ReverseTable(iValue);




    return 0;
}
