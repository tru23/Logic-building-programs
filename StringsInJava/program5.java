import java.util.*;

public class program5 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        int count = 0, i = 0;
        for (i = 0; i < Arr.length; i++) {

            System.out.println("letters in " + Arr[i] + " word are:" + Arr[i].length());

        }

        // System.out.println("words from string are: ");
        // int i = 0;

        // for (i = 0; i < Arr.length; i++) //for each loop =for(String s : Arr) jevha
        // purna arry travel karaicha asto tevha
        // {
        // System.out.println(Arr[i]);
        // }

        // System.out.println("Number of words :" + Arr.length);

    }
}