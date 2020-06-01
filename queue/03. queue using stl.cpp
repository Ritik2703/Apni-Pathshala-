/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int n,op;
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
	cout<<"queue using stl\n";
	queue<int> q1,q2,q3;
	do{
		cout<<"choose the option\n";
		cout<<"1. push in queue\n";
		cout<<"2. pop from queue\n";
		cout<<"3. front in queue\n";
		cout<<"4. size of queue\n";
		cout<<"5. swap queue\n";
		cout<<"6. display queue\n";
		cout<<"7. exit\n";
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
				cout<<"front in q1 is "<<q1.front()<<endl;
				cout<<"front in q2 is "<<q2.front()<<endl;
				cout<<"back in q1 is "<<q1.back()<<endl;
				cout<<"back in q2 is "<<q2.back()<<endl;
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
					cout<<q3.front()<<" ";
					q3.pop();
				}
				cout<<endl;
				q3=q2;
				while(!q3.empty())
				{
					cout<<q3.front()<<" ";
					q3.pop();
				}
				cout<<endl;
				
		}
   
}while(op!=7);
   return 0;
}

