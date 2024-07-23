import java.util.*;

public class program9 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        StringBuffer sb = new StringBuffer(str);
        sb = sb.reverse();

        System.out.println("reversed string  is:" + sb);

    }
}