import java.util.*;

public class program2 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string ");
        String str = sobj.nextLine();
        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        HashMap<String, Integer> hobj = new HashMap<String, Integer>();
        int Frequency = 0;

        for (String A : Arr) {
            if (hobj.containsKey(A)) {
                Frequency = hobj.get(A);
                hobj.put(A, Frequency + 1);

            } else {
                hobj.put(A, 1);
            }
        }
        Set<String> setobj = hobj.keySet();
        int max = 0;
        String s = "";
        for (String B : setobj) {
            // System.out.println(B + " occurs " + hobj.get(B) + " times ");
            if (hobj.get(B) > max) {
                max = hobj.get(B);
                s = B;
            }
        }
        System.out.println("max occuring word is " + s + " occuring  " + max + " times ");

    }

}
