#include<iostream>

using namespace std;

class emptystr
{
	 public:
	 emptystr(string msg)
	 {
		   msg2=" is empty";
		   msg1=msg;
		   msg3=msg1+msg2;
      }
      void what()
      {
		 cout<<msg3;
	 }
      private:
		    string msg1,msg2,msg3;
};
class full
{
	 public:
	 full(string msg)
	 {
		   msg2=" is full";
		   msg1=msg;
		   msg3=msg1+msg2;
      }
      void what()
      {
		 cout<<msg3;
	 }
      private:
		    string msg1,msg2,msg3;
};
template<class T>
class Queue;
template<class T>
class chainNode
{
     friend class Queue<T>;
     private:
          T element;
          chainNode<T>* next;
     public:
          chainNode(const T&,chainNode<T>*);
          void operator++();
};
template<class T>
chainNode<T>::chainNode(const T& element,chainNode<T>* next=NULL)
{
     this->element=element;
     this->next=next;
}
template<class T>
void chainNode<T>::operator++()
{
     this=(this)->next;
}

template<class T>
class Queue
{
     public:
          Queue();
          Queue(int);
          //~Queue();
          void push(const T& ele);
          void pop();
          bool empty();
          T& front();
          T& back();
          void display();
     private:
          chainNode<T>* thefront;
          chainNode<T>* theback;
          int listsize;
};
template<class T>
Queue<T>::Queue()
{
     thefront=theback=NULL;
     listsize=0;
}
template<class T>
Queue<T>::Queue(int len)
{
     thefront=theback=NULL;
}
template<class T>
void Queue<T>::push(const T& ele)
{
     if(listsize==0)
     {
          thefront=theback=new chainNode<T>(ele);
     }
     else
     {
          theback->next=new chainNode<T>(ele);
          theback=theback->next;
     }
     display();
     ++listsize;
}
template<class T>
void Queue<T>::pop()
{
     if(listsize==0) throw emptystr("queue");
     thefront=thefront->next;
     //++(thefront);/////////////////////////NOT WORKING;
     --listsize;

}
template<class T>
bool Queue<T>::empty()
{
     return listsize==0;
}

template<class T>
T& Queue<T>::front()
{
     return thefront->element;
}
template<class T>
T& Queue<T>::back()
{
     return theback->element;
}
template<class T>
void Queue<T>::display()
{
	int c=1;
     for(chainNode<T>* current=thefront;(c);current=current->next)
     {
     	cout<<current->element<<" ";
     	if(current==back) c=0;
	}
     cout<<endl;
}
int main()
{
     int a=1,b=2,c=3,d=4;
     Queue<int> q;
     q.push(a);
     q.push(b);
     q.push(c);
     q.push(d);
     q.display();
     q.pop();
     q.display();
     cin.ignore();
     cin.get();
     return 0;
}
