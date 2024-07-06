
class node
{
    public int data;
    public node next;
    public node prev;

    public node(int value)
    {
        data=value;
        next=null;
        prev=null;
    }
}

class DoublyCL
{
    public node First;
    public node Last;

    public int iCount;

    public DoublyCL()//constructor
    {
        System.out.println("object of doubly cl gets created successfully");

        First=null;
        Last=null;

        iCount=0;

       
    }

    public void InsertFirst(int No)
    {
        node newn=null;
        newn=new node(No);

        if(First==null && Last==null)
        {
            First=newn;
            Last=newn;
        }
        else
        {
            newn.next=First;
            First.prev=newn;
            First=newn;

        }
        Last.next=First;
        First.prev=Last;

        iCount++;
    }

    

    public void Display()
    {
        if(First==null && Last==null)
        {
            System.out.println("LL IS empty");
            return;
        }
        System.out.print("Elements of linked list are: \n");

        do{
            System.out.println("|"+First.data+"|<->");
            First=First.next;
        }while(First!=Last.next);

        System.out.println();
        
        
    }
    public int Count()
    {
        return iCount;
    }
    

    public void InsertLast(int No)
    {
        node newn=null;
        newn=new node(No);

        if(First==null && Last==null)
        {
            First=newn;
            Last=newn;
        }
        else
        {
            Last.next=newn;
            newn.prev=Last;
            Last=newn;

            

        }
        Last.next=First;
        First.prev=Last;

        iCount--;
        
    }
    
    public void InsertAtPos(int No,int pos)
    {
        node newn=null;
    node temp=null;
    int i=0;
    

    if(pos<1 || pos>iCount+1)
    {
        
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
    else{
        newn=new node(No);
      
        temp=First;
        for(i=1;i<pos-1;i++)
        {
            temp=temp.next;
        }
        
        newn.next=temp.next;
        temp.next.prev=newn;
        temp.next=newn;
        newn.prev=temp;

        iCount++;

    }
    

    }

    public void DeleteFirst()
    {
        if(First==null && Last==null)
        {
            return;
        }
        else if(First==Last)
        {
            First=null;
            Last=null;
        }
        else
        {
            First=First.next;
            
            Last.next=First;
            First.prev=Last;
    
        }
        iCount--;
        
    }

    public void DeleteLast()
    {
        
    }

    public void DeleteAtPos(int pos)
    {
    }
}

class program337 {
    public static void main(String Arg[]) {

       DoublyCL obj=new DoublyCL(); //DoublyCL obj of DoublyCL class;
        int iRet=0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        

        obj.InsertFirst(101);
        obj.InsertFirst(104);
        obj.InsertFirst(106);


        obj.Display();

        iRet=obj.Count();
        System.out.println("count is:"+iRet);

        





    }
}