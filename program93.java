import java.util.*;

public class program93 {
    
    public static int Diffrence(int iNo)
    {
        int i=0;
        int sumF=0;
        int sumN=0;

        for(i=1;i<iNo;i++)
        {
            if((iNo%i)==0)
            {
                sumF=sumF+i;

            }
            else{
                sumN=sumN+i;
            }

        }
        return sumF-sumN;

    }



public static void main(String Arg[]){

    int iValue1=0;
     int iRet=0;
     Scanner sobj =new Scanner(System.in);

     System.out.println("enter  number ");
     iValue1=sobj.nextInt();

     iRet=Diffrence(iValue1);

     System.out.println("difference is "+iRet);

     
}

}