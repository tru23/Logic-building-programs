import java.util.*;

public class program6 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        int iMax = 0, i = 0;
        String Max = Arr[0]; // int maxindex=0;
        for (i = 0; i < Arr.length; i++) {

            if (Arr[i].length() > iMax) {
                iMax = Arr[i].length();
                Max = Arr[i]; // maxindex=i
            }
        } // Arr[maxindex]//gives word
        System.out.println("maximum length of word in string is:" + iMax + " word is " + Max);

    }
}