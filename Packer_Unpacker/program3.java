import java.io.*;
import java.util.*;



public class program3
 {
    public static void main(String Arg[]) throws Exception 
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("-----------Packer Unpacker CUI Module---------------------- ");

        System.out.println("Enter File Name you what to open for reading");

        String File_Name=sobj.nextLine();
        File fobj=new File(File_Name);
      

        if(fobj.exists())
        {
            FileInputStream fiobj=new FileInputStream(fobj);


            byte Arr[]=new byte[20];//same alternate way
            fiobj.read(Arr);
            String str=new String(Arr);
            System.out.println("data from file is:"+str);

        }
        else{
            System.out.println("File does not exist");
        }

    }
}