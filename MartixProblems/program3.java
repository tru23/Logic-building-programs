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

    protected void finalize() {
        System.out.println("Garbage collecter is colecting the memory of an object");
        Arr = null;

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

    public void RowSum() {
        int i = 0, j = 0;
        int sum = 0;
        for (i = 0; i < iRow; i++) {

            for (j = 0, sum = 0; j < iCol; j++) {
                sum = sum + Arr[i][j];
            }
            System.out.println("sum of" + i + "is: " + sum);

        }

    }

    public int DiagonalSum() {
        int i = 0, j = 0;
        int sum = 0;
        if (iRow != iCol) {
            System.out.println("unable to perform addition of diagonal elements");
            System.out.println("because matrix is not square matrix");
            return -1;
        }
        for (i = 0; i < iRow; i++) {

            for (j = 0; j < iCol; j++) { // for (j = i; j < iCol && i==j; j++)//improve time complexity
                                         // sum = sum + Arr[i][j];
                if (i == j) {

                    sum = sum + Arr[i][j];
                }

            }

        }
        return sum;

    }

    public void SumEvenOdd() {
        int i = 0, j = 0;
        int esum = 0;
        int osum = 0;
        for (i = 0; i < iRow; i++) {

            for (j = 0; j < iCol; j++) {
                if (Arr[i][j] % 2 == 0) {
                    esum = esum + Arr[i][j];

                } else {
                    osum = osum + Arr[i][j];

                }
            }
        }
        System.out.println("sum of even elemts " + "is: " + esum);
        System.out.println("sum of odd elemts " + "is: " + osum);

    }

    public void ChangeMatrix() {
        int i = 0, j = 0;

        for (i = 0; i < iRow; i++) {

            for (j = 0; j < iCol; j++) {

                if (Arr[i][j] % 5 == 0) {
                    Arr[i][j] = 0;
                }

            }

        }

    }

    public void UpdateMatrixEven() {
        int i = 0, j = 0;

        for (i = 0; i < iRow; i++) {

            for (j = 0; j < iCol; j++) {

                if (Arr[i][j] % 2 != 0) {
                    Arr[i][j] = Arr[i][j] + 1;
                }

            }

        }

    }

}

public class program3 {
    public static void main(String Arg[]) throws Exception {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number of rows");
        int No1 = sobj.nextInt();

        System.out.println("enter nuber of columns");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1, No2);

        mobj.Accept();
        mobj.Display();

        // int iRet = mobj.Summation();
        // System.out.println("SUMMATION IS " + iRet);

        // int iRet2 = mobj.Maximum();
        // System.out.println("maximum is " + iRet2);

        // int iRet3 = mobj.Minimum();
        // System.out.println("minimum is " + iRet3);

        // mobj.RowSum();

        // int iRet4 = mobj.DiagonalSum();
        // System.out.println("sum of diagonal is " + iRet4);

        // mobj.SumEvenOdd();
        // mobj.ChangeMatrix();
        // mobj.Display();
        mobj.UpdateMatrixEven();
        mobj.Display();

        mobj = null;
        System.gc();

    }
}