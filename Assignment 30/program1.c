#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i=0,j=0;

        if(iRow!=iCol)
        {
            printf("Input Invalid");
            printf("Need irow and icol same");
             return ;
        }
   
    for(i=1;i<=iRow;i++)
    {
        
        for(j=1;j<=iCol;j++)
        {
           
            
           if(i>=j)
            {
                printf("*\t");
                
            }
             
           else
            {
               printf("#\t");
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