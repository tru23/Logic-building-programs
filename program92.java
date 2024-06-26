import java.util.*;


public class program92
 {
    public static void main(String Arg[])
    {
        Scanner sobj =new Scanner(System.in);

        int iValue=0;
        int i=0;
        int sum=0;

        System.out.println("enter number: ");

        iValue=sobj.nextInt();

        for(i=1;i<=(iValue/2);i++)
        {
            if((iValue%i)==0)
            {
                sum=sum+i;
            }
        }
        System.out.println("summ is "+sum);
    }
}
