import java.io.*;
import java.util.*;



public class program1
 {
    public static void main(String Arg[]) throws Exception 
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("-----------Packer Unpacker CUI Module---------------------- ");

        System.out.println("Enter File Name");

        String File_Name=sobj.nextLine();
        File fobj=new File(File_Name);
        boolean bRet=fobj.createNewFile();

        if(bRet==true)
        {
            System.out.println("file created successfully");
        }
        else
        {
            System.out.println("file not created");
        }

    }
}