#include<stdio.h>
void RangeDisplay(int iStart,int iEnd)
{
    if(iStart==iEnd)
    {
        printf("%d",iStart);
    }
    if(iStart<iEnd)
  {
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d ",iCnt);
    }
  }

}
//time complexity O(n)

int main()
{
    int ivlaue1=0,ivlaue2=0;
    printf("Enter Starting Number");
    scanf("%d",&ivlaue1);
    printf("Enter ending Number");
    scanf("%d",&ivlaue2);

    RangeDisplay(ivlaue1,ivlaue2);
    return 0;
}