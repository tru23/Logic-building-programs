import java.util.*;

public class program2 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        str = str.trim();

        char Arr[] = str.toCharArray();

        int iCount = 0;
        int i = 0;

        for (i = 0; i < Arr.length; i++) {
            if (Arr[i] == ' ') {
                iCount++;

            }
        }
        System.out.println("cont is: " + iCount);

    }
}