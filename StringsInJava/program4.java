import java.util.*;

public class program4 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        char Arr[] = str.toCharArray();

        int iCount = 0;
        int i = 0;

        for (i = 0; i < Arr.length; i++) {
            if (Arr[i] == ' ') {
                iCount++;
            }
        }
        System.out.println("no.of word is: " + (iCount + 1));

    }
}