import java.util.Scanner;

public class program133 {

    public static void main(String A[]) {
        Scanner sobj=new Scanner(System.in);

    System.out.println("enter  number of elements: ");
    int iSize=sobj.nextInt();

    int Arr[]=new int[iSize];

    System.out.println("size of array is:"+Arr.length);

    System.out.println("enter the elements:");
    for(int i=0;i<Arr.length;i++)
    {
        Arr[i]=sobj.nextInt();
    }

    System.out.println("entered elements are:");
    for(int j=0;j<Arr.length;j++)
    {
        System.out.println(Arr[j]);
    }

    }
    
}
