public class SinglyLinkeList
{
   Node start;
   int size;
}

 public SinnglyLinkedList()
{
  start=null;
  size=0;
}



public void add(Node data)
{
   if(size=0)
   {
      start=new Node();
      start.next=null;
      start.data=data;
   }
   else
   {
      Node currentnode=getnode(size-1);
      Node newnode=new Node();
      newnode.data=data;
      newnode.next=null;
      currentnode.next=newnode;
   }
   size++;
  }

  public void insertfront(Node data)
   {
     if(size==0)
    {
      Node newnode=new Node();
      start.next=null;
      start.data=data;
    }
    else        
    {
        Node newnode=new Node();
         newnode.data=data;
        newnode.next=start;
   }
   size++;
  }

   public void insertAt(int position,Node data)
   {
      if(position==0)
      {
        insertatfront(Node data);
       }
       else if(position==size-1)
      {
        insertatlast(data);
      }
       else
      {
         Node tempnode=getNodeAt(position-1);
         Node newnode= new Node();
         newnode.data=data;
         newnode.next=tempnode.next;
         size++;
      }
   }

 public Node getFirst()
 {
    return getNodeAt(0);
 }
  public Node getLast()
  {
     return getNodeAt(size-1);
  } 
  public Node removeAtFirst()
  {
     if(size==0)
     {
        System.out.println("Empty List ");
     } 
     else
     {
         Node tempnode=getNodeAt(position-1);
         Node data=tempnode.next.data;
         tempnode.next=tempnode.next.next;
         size--;
           return data;
     }
 }

      Node data=start.data;
      start=start.next;
      size--;
      return data;
  }
 }
 public Node removeAtLast()
 {
   if(size==0)
   {
      System.out.println("Empty List ");
   }
   else
   {
       Node data=getNodeAt(size-1);
       Node data=tempnode.next.data;
       size--;
       return data;
   }
}

   public string void main(string[] args)
  {

    LinkedList l1=new LinkedList();
    BufferReader bf=new BufferReader(new InputStreamReader(Sysyem.in));
    System.out.println("1->Add Element 2->Remove Last 3->Insert Front 4->Insert at        position 5->REmove Front 6-> Remove At Last 7->Exit ");
string choice;
choice.readline();
int choiceNum= Integer.parseInt(choice);
string str;
switch(choiceNum)
{
    case 1: System.out.println("Enter the element to be inserted ");
        str =bf.readline();
        l1.add(str);
        break;

    case 2: System.out.println("Linked List before removing element : "+l1);
        System.out.println("Linked List after removing element  : ");
        l1.removeLast();
        break;

    case 3: System.out.println("Linked List before inserting element at first: "+l1);
        System.out.println("Enter the element to be inserted at first: ");
        str.readline(); 
        l1.insertfront(str);
        System.out.println("Linked List after inserting at first : "+l1);
        break;

    case 4: System.out.println("Linked List before inserting element at particular position: "+l1);
        System.out.println("Enter the element position & element : ");
        str.readline();
        string str1;
        str1.readline();
        l1.insertAt(str,str1);
        System.out.println("Linked List after inserting at particular Position :"+l1);
        break;

    case 5: System.out.println("Linked LIst before removing front element: "+l1);
        System.out.println("Linked List after removing front element : ");
        l1.removeAtFirst();
        break;

    case 6: System.out.println("Linked List before removing last element: "+l1);
        System.out.println("Linked List after removing last element :");
        l1.removeAtLast();

    default:break;
    }
   }
   }
