import java.util.*;

public class program1 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        // char Arr[] = str.toCharArray();//

        int iCount = 0;
        int i = 0;

        for (i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ' ') {
                iCount++;

            }
        }
        System.out.println("cont is: " + iCount);

    }
}