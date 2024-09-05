import java.util.*;

public class program1 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string ");
        String str = sobj.nextLine();

        str = str.replaceAll(" ", "");

        char Arr[] = str.toCharArray();

        // for (char ch : Arr) {
        // System.out.println(ch);
        // }

        HashMap<Character, Integer> hobj = new HashMap<Character, Integer>();

        int Frequency = 0;
        for (char ch : Arr) {
            if (hobj.containsKey(ch)) {
                Frequency = hobj.get(ch);
                hobj.put(ch, Frequency + 1);
            } else {
                hobj.put(ch, 1);
            }

        }
        Set<Character> setobj = hobj.keySet();// phakta keys display honar keyset=key cha column

        // System.out.println(setobj);
        int max = 0;
        char ch = '\0';
        for (char data : setobj) {

            // System.out.println(data + " occurs " + hobj.get(data) + " times ");// to get
            // values for each key

            if (hobj.get(data) > max) {
                max = hobj.get(data);
                ch = data;
            }

        }
        System.out.println(ch + " occurs maximum number of times in string ie " + max + " times");

    }

}
