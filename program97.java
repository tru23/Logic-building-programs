import java.util.*;
public class program97 {
    
    public static int DiffeEvenOdd(int iNo)
    {
        
    
        int digit=0;
        int sumE=0;
        int sumO=0;
        while(iNo!=0){
            digit=iNo%10;
            if((digit%2)==0)
            {
                sumE=sumE+digit;
            }
            else{
                sumO=sumO+digit;
            }
            iNo=iNo/10;
        }
        return sumE-sumO;

    }



public static void main(String Arg[]){

    int iValue1=0;
     int iRet=0;
     Scanner sobj =new Scanner(System.in);

     System.out.println("enter  number ");
     iValue1=sobj.nextInt();

     iRet=DiffeEvenOdd(iValue1);

     System.out.println("digits  are "+iRet);

     
}

}
