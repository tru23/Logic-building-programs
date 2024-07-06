
class node
{
    public int data;
    public node next;

    public node(int value)
    {
        data=value;
        next=null;
    }
}

class SinglyLL
{
    public node First;
    public int iCount;

    public SinglyLL()
    {
        System.out.println("Object of SinglyLL gets  created successfully");
        First=null;
        iCount=0;
    }

    public void InsertFirst(int No)
    {
        node newn=null;
        newn=new node(No);
        
        if(First==null)
        {
            First=newn;

        }
        else{
            newn.next=First;
            First=newn;
        }
        iCount++;
    }

    public void Display()
    {
        System.out.print("Elements of linked list are: \n");
        
        node temp = First;
        while (temp != null)
        {
            System.out.print("|" + temp.data + "|->");
            temp = temp.next;
        }
        System.out.println(); // Move to a new line after printing all elements
    }
    public int Count()
    {
        return iCount;
    }
    

    public void InsertLast(int No)
    {
        node newn=null;
        node temp=null;
        newn=new node(No);
        

        if(First==null)
        {
            First=newn;

        }
        else{
            temp=First;
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.next=newn;

            
        }
        iCount++;
    }
    
    public void InsertAtPos(int No,int pos)
    {
        node newn=null;
        


        if(pos<1 && pos>iCount+1)
        {
            System.out.println("Invalid position\n");
            return;
        }
        if(pos==1)
        {
            InsertFirst(No);
        }
        else if(pos==iCount+1)
        {
            InsertLast(No);
        }
        else
        {
            newn=new node(No);
           

            node temp=First;

            for(int i=1;i<pos-1;i++)
            {
                temp=temp.next;
            }
           newn.next=temp.next;
           temp.next=newn;

           iCount++;

        }

    }

    public void DeleteFirst()
    {
        if(First==null)
        {
            System.err.println("LL is empty");
            return;

        }
        else if(First.next==null)
        {
            First=null;
        }
        else
        {
            First=First.next;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if(First==null)
        {
            System.err.println("LL is empty");
            return;

        }
        else if(First.next==null)
        {
            First=null;
        }
        else
        {
            node temp=First;

            while(temp.next.next!=null)
            {
                temp=temp.next;
            }
            temp.next=null;

        }
        iCount--;
    }

    public void DeleteAtPos(int pos)
    {
      
        if(pos<1 && pos>iCount)
        {
            System.out.println("Invalid position\n");
            return;
        }
        if(pos==1)
        {
            DeleteFirst();
        }
        else if(pos==iCount)
        {
            DeleteLast();
        }
        else
        {
           
            node temp=First;

            for(int i=1;i<pos-1;i++)
            {
                temp=temp.next;
            }
            temp.next=temp.next.next;
            
           iCount--;

        }

    }
}

class program336 {
    public static void main(String Arg[]) {

        SinglyLL obj=new SinglyLL(); //SinglyLL obj;
        int iRet=0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.InsertFirst(101);
        obj.InsertFirst(104);
        obj.InsertFirst(106);


        obj.Display();

        iRet=obj.Count();
        System.out.println("count is:"+iRet);

        obj.DeleteFirst();

        obj.Display();

        iRet=obj.Count();
        System.out.println("count is:"+iRet);

        obj.DeleteLast();

        obj.Display();

        iRet=obj.Count();
        System.out.println("count is:"+iRet);

        obj.InsertAtPos(78, 5);

        obj.Display();

        iRet=obj.Count();
        System.out.println("count is:"+iRet);

        obj.DeleteAtPos(5);
        obj.Display();

        iRet=obj.Count();
        System.out.println("count is:"+iRet);





    }
}