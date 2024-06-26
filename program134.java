import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int no)//constructor
    {
        Arr=new int[no];//array of 5 size is created

    } 

}


public class program134 {
    public static void main(String A[])
    {
        ArrayX aobj=new ArrayX(5);//this is no

        System.out.println("Array size is: "+aobj.Arr.length);

    }
}
