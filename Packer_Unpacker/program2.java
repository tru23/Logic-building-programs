import java.io.*;
import java.util.*;



public class program2
 {
    public static void main(String Arg[]) throws Exception 
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("-----------Packer Unpacker CUI Module---------------------- ");

        System.out.println("Enter File Name you what to open for writting");

        String File_Name=sobj.nextLine();
        File fobj=new File(File_Name);
      

        if(fobj.exists())
        {
            FileOutputStream foobj=new FileOutputStream(fobj);

            String str="Marvellous";//string to write in file
            
            // foobj.write(str.getBytes(StandardCharsets.UTF_8));//write always accept byte array

            byte Arr[]=str.getBytes();//same alternate way
            foobj.write(Arr);

        }
        else{
            System.out.println("File does not exist");
        }

    }
}