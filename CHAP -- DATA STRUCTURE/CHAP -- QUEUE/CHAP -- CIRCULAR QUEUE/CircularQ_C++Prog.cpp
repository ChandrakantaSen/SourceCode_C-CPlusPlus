#include<iostream>

using namespace std;

class empty
{
	 public:
	 empty(string msg)
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
class cqueue
{
	 public:
		   cqueue(int);
		   ~cqueue(){ delete[] element;}
		   void push(const T ele);
		   void pop();
		   bool isempty();
		   T* front(){return &element[(qfront+1)%listsize];}
		   T& back();
		   int size();
		   void display();
	 private:
		    int listsize;
		    T* element;
		    int qback;
		    int qfront;
};
template<class T>
cqueue<T>::cqueue(int len)
{
             listsize=len;
		   element=new T[listsize];
		   qfront=0;
		   qback=0;
}
template<class T>
void cqueue<T>::push(const T ele)
{
	if((qback+1)%listsize==qfront) throw full("queue");
	qback=(qback+1)%listsize;
	element[qback]=ele;
}
template<class T>
void cqueue<T>::pop()
{
	if(isempty()) throw empty("queue");
	qfront=(qfront+1)%listsize;
	element[qfront].~T();
	
}
template<class T>
bool cqueue<T>::isempty()
{
	if(qfront==qback) return true;
	return false;
}

template<class T>
void cqueue<T>::display()
{
	for(int i=qfront+1;i<=qback;i++)
	cout<<element[i]<<" ";
	cout<<endl;
}
class term
{
	 public:
		   term()
		   {
                    static int i=1;
			    a=i++;
	        }
	        ~term()
	        {
				cout<<"destructor\n";
		   }
	friend ostream& operator<<(ostream&,const term&);
	  //private:
			int a;
};
ostream& operator<<(ostream& out,const term& t)
{
     out<<t.a;
     return out;
}

int main()
{
		cqueue<int> cq1(10);
		int a=1,b=2,c=3,d=4;
		cq1.push(a);
          cq1.push(b);
          cq1.push(c);
          cq1.push(d);
          cq1.display();
          cq1.pop();
          cq1.display();
          cqueue<term> cq2(3);
          term t1,t2;
          cq2.push(t1);
          cq2.push(t2);
          term* t=cq2.front();
          (*t).a=9;
          cq2.display();
          cq2.pop();
          cq2.display();
          cin.ignore();
          cin.get();
}
          
