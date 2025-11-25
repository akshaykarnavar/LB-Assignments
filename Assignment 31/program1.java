import java.util.Scanner;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i,j=0;
        for(i=1;i<=iRow;i++)
        {
           for(j=1;j<=iCol;j++)
           {
            if(j<=i)
            {
             System.out.print("*\t");
            }
            
           }
           System.out.println();
            
            
        
        }
    }

}

class program1
{
    public static void main(String A[])
    {
        int iValue1=0,iValue2=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter No of Rows:");
        iValue1=sobj.nextInt();

        System.out.println("Enter No of Columns:");
        iValue2=sobj.nextInt();

        Pattern pobj=new Pattern();
        pobj.Display(iValue1,iValue2);




    }
}