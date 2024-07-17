import java.io.*;
import java.util.*;



public class program4
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


            byte Arr[]=new byte[1024];
            int iRet=0;
            int iSum=0;

            String str=null;
            while((iRet=fiobj.read(Arr)) !=-1)
            {
                iSum=iSum+iRet;
                str=new String(Arr);
                System.out.println(str);
            }

           // System.out.println("File size is: "+iSum);//alternate
           System.out.println("file size is "+fobj.length());
       


        }
        else{
            System.out.println("File does not exist");
        }

    }
}