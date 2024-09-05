import java.util.*;

class program632 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iNo = sobj.nextInt();

        int sum = 0;
        int digit = 0;

        while (iNo >= 10) {
            while (iNo != 0) {
                digit = iNo % 10;
                sum = sum + digit;
                iNo = iNo / 10;
            }
            iNo = sum;
            if (sum >= 10) {
                iNo = sum;
                sum = 0;
            } else {

                break;
            }

        }
        System.out.println("generic root is " + sum);
    }
}