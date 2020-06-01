/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int n,op,val;
class Stack{
	queue<int>q1,q2,q3;
	int size;
	public:
		Stack()
		{
			size=0;
		}
		void push(int n)
		{
			size++;
			q2.push(n);
			while(!q1.empty())
			{
				q2.push(q1.front());
				q1.pop();
			}
			q3=q1;
			q1=q2;
			q2=q3;
		}
		void pop()
		{
			if(q1.empty())
			return;
			q1.pop();
			size--;
		}
	    int peek()
	    {
	    	return q1.front();
		}
		void display()
		{
			q3=q1;
			while(!q3.empty())
			{
				cout<<q3.front()<<" ";
				q3.pop();
			}
			cout<<endl;
		}
};
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"stack using multiple queue\n";
   Stack s;
   do{
   	cout<<"choose the option\n";
   	cout<<"1. push in stack\n";
   	cout<<"2. pop from stack\n";
   	cout<<"3. peek ins stack\n";
	cout<<"4. display stack\n";
   	cout<<"5. exit\n";
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cin>>n;
   			s.push(n);
   			break;
   			
   		case 2:
   			s.pop();
   			break;
   		case 3:
   			cout<<"top of stack is "<<s.peek()<<endl;
   			break;
   		case 4:
   			s.display();
   			break;
	   }
   }while(op!=5);
   

   return 0;
}

