#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i=0,j=0;
    
    for(i=1;i<=iRow;i++)
    {
        char ch='a';
        for(j=1;j<=iCol;j++)
        {    

             if(i%2==1)
             {
                printf("%c\t",ch);
                  ch++;
             }
           
             else
            {
                printf("%d\t",j);
            }
            

        }
       printf("\n");
       
    }
    printf("\n");

}

int main()
{

    int iValue1=0,iValue2=0;

    printf("Enter the Number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter the Number of Columns:");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);


    return 0;
}