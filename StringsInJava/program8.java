import java.util.*;

public class program8 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        System.out.println("enter word");
        String word = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        int i = 0;
        int count = 0;

        for (String s : Arr) {
            if (word.equals(s)) {
                count++;

            }
        }
        System.out.println("frequency is:" + count);

    }
}