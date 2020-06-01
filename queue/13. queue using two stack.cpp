/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int n,op;
class Queue{
	stack<int>s1,s2,s3;
	public:
		void push(int n)
		{
			if(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
			s1.push(n);
			while(!s2.empty())
			{
				s1.push(s2.top());
				s2.pop();
			}
		}
		int pop()
		{
			if(s1.empty())
			cout<<"queue is empty\n";
			int x=s1.top();
			s1.pop();
			return x;
		}
		void display()
		{
			s3=s1;
			while(!s3.empty())
			{
				cout<<s3.top()<<" ";
				s3.pop();
			}
			cout<<endl;
		}
		
};
int main()
{
	  cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"queue using two stack\n";
	Queue s;
    do{
   	cout<<"choose the option\n";
   	cout<<"1. push in queue\n";
   	cout<<"2. pop from queue\n";
	cout<<"3. display queue\n";
   	cout<<"4. exit\n";
   	
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cin>>n;
   			s.push(n);
   			break;
   			
   		case 2:
   			cout<<"popped element is "<<s.pop()<<endl;
   			break;

   		case 3:
   			s.display();
   			break;
	   }
   }while(op!=4);
   

   return 0;
}

