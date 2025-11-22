import java.util.*;

class Pattern
{ 
    public void Display(int iNO)
    {
        int iCnt=0;
        

        for(iCnt=iNO;iCnt>=1;iCnt--)
        {
            System.out.print(iCnt+ " # ");
        
        }

    }

}

class program2
{
    public static void main(String A[])
    { 
        int iValue=0;

        Scanner sobj=new Scanner(System.in);
        System.out.println("Enetr Number N:");
        iValue=sobj.nextInt();

        Pattern pobj=new Pattern();
        pobj.Display(iValue);

    }
}