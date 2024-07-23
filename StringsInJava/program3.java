import java.util.*;

public class program3 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        System.out.println("after replacement str is: " + str);
        str = str.replaceAll("a", "z");

        System.out.println("after replacement str is: " + str);

    }
}