
import java.io.*;
import java.util.*;



public class program5
 {
    public static void main(String Arg[]) throws Exception 
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("-----------Packer Unpacker CUI Module---------------------- ");

        System.out.println("Enter the source File Name");
        String Source=sobj.nextLine();

        System.out.println("Enter the Destination File Name");
        String Destination=sobj.nextLine();

        File Sourceobj=new File(Source);


        if(Sourceobj.exists())
        {
            File Desteobj=new File(Destination);

            boolean bRet=Desteobj.createNewFile();
            if(bRet==false)
            {
                System.out.println("unable to creat file");
                return;
            }

            FileInputStream fiobj=new FileInputStream(Sourceobj);
            FileInputStream foobj=new FileInputStream(Desteobj); 

            byte Buffer[]=new byte[1024];
            int iRet=0;

            while(iRet=fiobj.read(Buffer) !=-1)
            {

            }


    
        }
        else{
            System.out.println("File does not exist");
        }

        
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

        System.out.println("Enter File Name");

        String File2_Name=sobj.nextLine();
        File f2obj=new File(File2_Name);
        boolean bRet=f2obj.createNewFile();

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