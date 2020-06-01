
/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int n,op;
void maxheap()
{
	do{
		cout<<"choose the option\n";
		cout<<"1. push in queue\n";
		cout<<"2. pop from queue\n";
		cout<<"3. top in queue\n";
		cout<<"4. size of queue\n";
		cout<<"5. swap queues\n";
		cout<<"6. display queue\n";
		cout<<"7. exit\n";
		priority_queue<int> q1,q2,q3;
		cin>>op;
		switch(op)
		{
			case 1:
				cin>>n;
				q1.push(n);
				q2.push(3*n);
				break;
			case 2:
				q1.pop();
				q2.pop();
				break;
			case 3:
				cout<<"top in q1 is "<<q1.top()<<endl;
				cout<<"top in q2 is "<<q2.top()<<endl;
				
				break;
			case 4:
				cout<<"Size of q1 is "<<q1.size()<<endl;
				cout<<"Size of q2 is "<<q2.size()<<endl;
				break;
			case 5:
				swap(q1,q2);
				break;
			case 6:
				q3=q1;
				while(!q3.empty())
				{
					cout<<q3.top()<<" ";
					q3.pop();
				}
				cout<<endl;
				q3=q2;
				while(!q3.empty())
				{
					cout<<q3.top()<<" ";
					q3.pop();
				}
				cout<<endl;
				
		}
	}while(op!=7);
}
void minheap()
{
	do{
		cout<<"choose the option\n";
		cout<<"1. push in queue\n";
		cout<<"2. pop from queue\n";
		cout<<"3. top in queue\n";
		cout<<"4. size of queue\n";
		cout<<"5. swap queues\n";
		cout<<"6. display queue\n";
		cout<<"7. exit\n";
		priority_queue<int,vector<int>,greater<int>> q1,q2,q3;
		cin>>op;
		switch(op)
		{
			case 1:
				cin>>n;
				q1.push(n);
				q2.push(2*n);
				break;
			case 2:
				q1.pop();
				q2.pop();
				break;
			case 3:
				cout<<"top in q1 is "<<q1.top()<<endl;
				cout<<"top in q2 is "<<q2.top()<<endl;
				break;
			case 4:
				cout<<"Size of q1 is "<<q1.size()<<endl;
				cout<<"Size of q2 is "<<q2.size()<<endl;
				break;
			case 5:
				swap(q1,q2);
				break;
			case 6:
				q3=q1;
				while(!q3.empty())
				{
					cout<<q3.top()<<" ";
					q3.pop();
				}
				cout<<endl;
				q3=q2;
				while(!q3.empty())
				{
					cout<<q3.top()<<" ";
					q3.pop();
				}
				cout<<endl;
				
		}
	}while(op!=7);
}
int main()
{
	cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
	cout<<"priority queue using stl\n";
	do{
		cout<<"choose the option\n";
		cout<<"1. max heap\n";
		cout<<"2. min heap\n";
		cout<<"3. exit\n";
		cin>>op;
		switch(op)
		{
		case 1:
			maxheap();
			break;
		case 2:
			minheap();
			break;
		}
	}while(op!=3);
   return 0;
}
