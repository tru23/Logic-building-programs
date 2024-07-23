import java.util.*;

public class program7 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        System.out.println("enter charactyer");
        String s = sobj.nextLine();

        char ch = s.charAt(0);

        char Arr[] = str.toCharArray();

        int i = 0;
        int count = 0;

        for (i = 0; i < Arr.length; i++) {
            if (Arr[i] == ch) {
                count++;

            }
        }
        System.out.println("frequency is:" + count);

    }
}