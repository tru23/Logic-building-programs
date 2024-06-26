import java.util.*;
public class program96 {
    
    public static int SumOddDigits(int iNo)
    {
        
        int sum=0;
        int digit=0;

        while(iNo>0){
            digit=iNo%10;
            if((digit%2)!=0)
            {
                sum=sum+digit;
            }
            iNo=iNo/10;
        }
        return sum;

    }



public static void main(String Arg[]){

    int iValue1=0;
     int iRet=0;
     Scanner sobj =new Scanner(System.in);

     System.out.println("enter  number ");
     iValue1=sobj.nextInt();

     iRet=SumOddDigits(iValue1);

     System.out.println("digits  are "+iRet);

     
}

}
