import java.util.*;



 class program116 
 {

    public static int CountCapital(String str)
    {
        char Arr[]=str.toCharArray();
        int i=0, iCnt=0;
        for(i=0;i<str.length();i++)
        {
            
        }
        return iCnt;
    }
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter your name:");
        String name=sobj.nextLine();

        int iRet=0;
        iRet=CountCapital(name);

        System.out.println("number of capital charecyer are:"+iRet);

    }
}
