import java.util.*;

class Employee {
    public int Eid;
    public String Ename;
    public String EAddress;
    public int ESalary;

    private static int Counter;

    static {
        Counter = 0;
    }

    public Employee(String B, String C, int D) {
        this.Eid = ++Counter;
        this.Ename = B;
        this.EAddress = C;
        this.ESalary = D;
    }

    void DisplayInfo() {
        System.out.println("EID : " + Eid + " Name : " + Ename + " Address : " + EAddress + " Salary : " + ESalary);
    }
}

class MarvellousDBMS {
    public LinkedList<Employee> lobj;

    public MarvellousDBMS() {
        System.out.println("Marvellous DBMS started succesfully...");
        lobj = new LinkedList<Employee>();
    }

    // Insert into employee values(1,"Sagar,"Pune",11000)

    public void InsertIntoTable(String name, String address, int salary) {
        Employee eobj = new Employee(name, address, salary);
        lobj.add(eobj);
    }

    // Select * from Employee

    public void Selectstar() {
        System.out.println("data from employee database");
        for (Employee eref : lobj) {
            eref.DisplayInfo();
        }
    }

    // Select * from Employee WHERE EID=3;

    public void SelectSpecific(int no) {

        System.out.println("Information of employee whose id is " + no);
        for (Employee eref : lobj) {
            if (eref.Eid == no) {
                eref.DisplayInfo();
                break;

            }

        }

    }

    // Select * from Employee WHERE Ename=Mansi// function overloading in java same
    // fuction name and diffrent parameter
    public void SelectSpecific(String name) {

        System.out.println("Information of employee whose name is " + name);
        for (Employee eref : lobj) {
            if (name.equals(eref.Ename)) {
                eref.DisplayInfo();
            }
        }
    }

    // delete from Employee WHERE Eid=3;
    public void DeleteFrom(int id) {
        int index = 0;
        boolean bflag = false;
        for (Employee eref : lobj) {
            if (eref.Eid == id) {
                bflag = true;
                break;

            }
            index++;

        }
        if (bflag == false) {
            System.out.println("unable to delte as not present");
        } else {
            System.out.println("Deleted successfully");
            lobj.remove(index);
        }
    }

    // delete from Employee WHERE Ename=trupti;
    public void DeleteFrom(String name) {
        int index = 0;
        boolean bflag = false;
        for (Employee eref : lobj) {
            if (name.equals(eref.Ename)) {
                bflag = true;
                break;

            }
            index++;

        }
        if (bflag == false) {
            System.out.println("unable to delte as not present");
        } else {
            System.out.println("Deleted successfully");
            lobj.remove(index);
        }
    }

    // Select Sum(ESalary) from Employee;
    public void AgreegateSum() {
        int iSum = 0;
        for (Employee eref : lobj) {
            iSum = iSum + eref.ESalary;
        }
        System.out.println("summation of salary is:" + iSum);
    }

    // Select Max(ESalary) from Employee;
    public void AgreegateMax() {
        int iMax = 0;
        for (Employee eref : lobj) {
            if (eref.ESalary > iMax) {
                iMax = eref.ESalary;
            }
        }
        System.out.println("maximum of salary is:" + iMax);
    }

    // Select Min(ESalary) from Employee;
    public void AgreegateMin() {
        Employee temp = lobj.get(0);
        int iMin = temp.ESalary;
        for (Employee eref : lobj) {
            if (eref.ESalary < iMin) {
                iMin = eref.ESalary;
            }
        }
        System.out.println("minimum of salary is:" + iMin);
    }

    // Select Avg(ESalary) from Employee;
    public void AgreegateAvg() {
        int iAvg = 0;
        int iSum = 0;
        for (Employee eref : lobj) {
            iSum = iSum + eref.ESalary;
            iAvg = iSum / lobj.size();
        }
        System.out.println("Average of salary is:" + iAvg);
    }

    // Select Count(ESalary) from Employee;
    public void AgreegateCount() {
        int iCount = 0;
        for (Employee eref : lobj) {
            iCount++;
        }
        System.out.println("Count of salary is:" + iCount);
    }
}

class program1 {
    public static void main(String Arg[]) {
        System.out.println("-------- Marvellous Database Management System --------");

        MarvellousDBMS mobj = new MarvellousDBMS();

        mobj.InsertIntoTable("sagar", "pune", 11000);
        mobj.InsertIntoTable("trupti", "pune", 1200000);
        mobj.InsertIntoTable("saket", "pune", 1200000);
        mobj.InsertIntoTable("sayli", "pune", 100000);

        mobj.Selectstar();
        mobj.SelectSpecific(3);
        mobj.SelectSpecific("sayli");

        mobj.DeleteFrom(4);
        mobj.Selectstar();
        mobj.DeleteFrom("trupti");
        mobj.Selectstar();
        mobj.AgreegateSum();
        mobj.AgreegateCount();

        mobj.AgreegateMax();
        mobj.AgreegateMin();
        mobj.AgreegateAvg();
    }
}