import java.util.*;

class Pattern
{ 
    public void Display(int iNO)
    {
        int iCnt=0;
        char ch='A';

        for(iCnt=1;iCnt<=iNO;iCnt++)
        {
            System.out.print(ch+"\t");
            ch++;
        }

    }

}

class program1
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