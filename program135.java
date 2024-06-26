import java.util.Scanner;

class OopsX {
    public int Arr[];

    public OopsX(int no) {
        Arr = new int[no];
    }

    public void Accept() {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements: ");
        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display() {
        System.out.println("Elements of the array are: ");
        for (int i = 0; i < Arr.length; i++) {
            System.out.println(Arr[i]);
        }
    }
}

public class program135 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements you want to store: ");
        int iNo = sobj.nextInt();

        OopsX aobj = new OopsX(iNo);

        System.out.println("Array size is: " + aobj.Arr.length);

        aobj.Accept();

        aobj.Display();
    }
}
