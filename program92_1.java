//Approach3

import java.util.*;

class Arithematic 
{
    public int iNo1;
    public int iNo2;

    public Arithematic (int A,int B)
    {
        iNo1 = A;
        iNo2 = B;
    }
    public int Addition()
    {
        int iAns = 0;
        iAns = (iNo1 + iNo2);
        return iAns;
    }
}

public class program92_1 {
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iValue2 = 0;
        int iAns = 0;
        System.out.println("Enter first number ");
        iValue1 = sobj.nextInt();
        System.out.println("Enter second number ");
        iValue2 = sobj.nextInt();

        Arithematic aobj = new Arithematic (iValue1,iValue2);


        iAns = aobj.Addition();
        System.out.println("Addition is : "+iAns );
    }

}
