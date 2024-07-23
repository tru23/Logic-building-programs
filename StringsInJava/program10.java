import java.util.*;

public class program10 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        StringBuffer temp = null;

        StringBuffer finalstr = new StringBuffer(" ");

        for (String s : Arr) {
            temp = new StringBuffer(s);
            temp = temp.reverse();
            finalstr.append(temp);
            finalstr.append(" ");

        }
        System.err.println("reversed is " + finalstr);

    }
}