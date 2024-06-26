import java.util.*;

class  ArrayX {
    public int Arr[];

    public ArrayX(int no) {
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

    public float Average() {
        int iSum = 0;
        float avg = 0.0f;
        for (int i = 0; i < Arr.length; i++) {
            iSum = iSum + Arr[i];

        }
        avg = (float)iSum / (float)(Arr.length);

        return avg;
    }
}

public class program136 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements you want to store: ");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        System.out.println("Array size is: " + aobj.Arr.length);

        

        aobj.Accept();

        aobj.Display();
        float fRet = aobj.Average();
        System.out.println("average is " + fRet);
    }
}
