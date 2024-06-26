import java.util.*;
public class program94 {
    
    public static int CountDigits(int iNo)
    {
        
        int count=0;

        while(iNo>0){
            count++;
            iNo=iNo/10;
        }
        return count;

    }



public static void main(String Arg[]){

    int iValue1=0;
     int iRet=0;
     Scanner sobj =new Scanner(System.in);

     System.out.println("enter  number ");
     iValue1=sobj.nextInt();

     iRet=CountDigits(iValue1);

     System.out.println("digits  are "+iRet);

     
}

}
