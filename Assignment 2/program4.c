#include<stdio.h>

void  Display(int iNo, int iFrequency)
{
   
   
    if(iNo<0)
    {
        iNo=-iNo;
    } 
    
    if(iFrequency<0)
    {
        iFrequency=-iFrequency;
    } 
    

     int icnt=0;

     for(icnt=1;icnt<=iFrequency;icnt++)
     {
        printf("%d\n",iNo);

     }
   

   

}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter the value1: ");
    scanf("%d",&iValue1);
    printf("Enter the value2: ");
    scanf("%d",&iValue2);
    

    Display(iValue1,iValue2);
    return 0;
}