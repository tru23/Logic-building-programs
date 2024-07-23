import java.util.*;

class Matrix {
    public int Arr[][];
    int iRow;
    int iCol;

    Matrix(int A, int B) {

        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    public void Accept() {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the data: ");

        int i = 0, j = 0;

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                Arr[i][j] = sobj.nextInt();
            }

        }

    }

    public void Display() {
        int i = 0, j = 0;

        System.out.println("Elements from the matrix : ");

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public int Summation() {
        int i = 0, j = 0;
        int sum = 0;
        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                sum = sum + Arr[i][j];
            }

        }
        return sum;

    }

    public int Maximum() {
        int i = 0, j = 0;
        int iMax = Arr[0][0];
        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                if (iMax < Arr[i][j]) {
                    iMax = Arr[i][j];
                }
            }

        }
        return iMax;

    }

    public int Minimum() {
        int i = 0, j = 0;
        int iMin = Arr[0][0];
        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                if (iMin > Arr[i][j]) {
                    iMin = Arr[i][j];
                }
            }
        }
        return iMin;

    }

}

public class program1 {
    public static void main(String Arg[]) throws Exception {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number of rows");
        int No1 = sobj.nextInt();

        System.out.println("enter nuber of columns");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1, No2);

        mobj.Accept();
        mobj.Display();

        int iRet = mobj.Summation();
        System.out.println("SUMMATION IS " + iRet);

        int iRet2 = mobj.Maximum();
        System.out.println("maximum is " + iRet2);

        int iRet3 = mobj.Minimum();
        System.out.println("minimum is " + iRet3);

        mobj = null;

    }
}