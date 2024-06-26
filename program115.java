import java.util.*;

public class program115 {
     public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter your name:");
        String name=sobj.nextLine();

        char Arr[]=name.toCharArray();//string class object is converted to charecter array 
        
       
        System.out.println("array length is :"+Arr.length);//length property
        System.out.println("String length is:"+name.length());//lenght method
    }
}
