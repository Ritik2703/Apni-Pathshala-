/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
#define max 4
using namespace std;
int n,op,val;
int q[max],front=-1,rear=-1;
void push(int n)
{
	if(rear==max-1)
	cout<<"overflow\n";
	else if(front==-1&&rear==-1)
	front=0,rear=0;
	else
	{
	rear++;
	cout<<n<<" is successfully inserted\n";
}
	
	q[rear]=n;
	
}
int deletee()
{
	if(front==-1||front>rear)
	cout<<"underflow\n";
	else{
		val= q[front];
		front++;
		if(front>rear)
		front=rear=-1;
		return val;
	}
	
}
int peek()
{
	if(front==-1||front>rear)
	{
	cout<<"queue is empty\n";
	return -1;
}
	else{
		val= q[front];
		return val;
	}
}
void display()
{
	if(front==-1&&front>rear)
	cout<<"queue is empty\n";
	else{
	cout<<"queue is ";
	cout<<front<<" "<<rear<<endl;
	for(int i=front;i<=rear;i++)
	cout<<q[i]<<" ";
	cout<<endl;
}
}
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"linear queue using array\n";
   do{
   	
   	cout<<"choose the option\n";
   	cout<<"1. insert\n";
   	cout<<"2. delete\n";
   	cout<<"3. peek\n";
   	cout<<"4. display\n";
   	cout<<"5. exit\n";
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cout<<"enter element to be pushed\n";
   			cin>>n;
   			push(n);
   			break;
   		case 2:
   			cout<<"successfully delted\ndeleted element is "<<deletee()<<endl;
   			break;
   		case 3:
   		    cout<<"peek element is "<<peek()<<endl;
   		    break;
   		case 4:
   			display();
   			break;
   		
	   }
   	
   }while(op!=5);
   

   return 0;
}
