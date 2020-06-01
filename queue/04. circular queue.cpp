/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
#define max 5
using namespace std;
int n,op,val;
int q[max],front=-1,rear=-1;
void push(int n)
{
	if(front==0&&rear==max-1)
	cout<<"queue is full\n";
	else if(rear==-1&&front==-1)
	{
	front=0,rear=0;
	q[rear]=n;
    }
	else if(rear==max-1&&front!=0)
	{
		rear=0;
		q[rear]=n;
	}
	else
	{
		++rear;
	q[rear]=n;
    }
}
int deletee()
{
	if(front==-1&&rear==-1)
	cout<<"underflow\n";
	val= q[front];
	if(front==rear)
	front= rear=-1;
	else
	{
		if(front==max-1)
		front=0;
		else
		front++;
	}
	return val;
}
int peek()
{
	if(front==-1&&rear==-1)
	cout<<"queue is empty\n";
	else
	return q[front];
}
void display()
{
	if(front==-1&&rear==-1)
	cout<<"queue is empty\n";
	else{
		if(front<rear)
		{
	for(int i=front;i<=rear;i++)
	cout<<q[i]<<" ";
}
	else{
		for(int i=front;i<max;i++)
		cout<<q[i]<<" ";
		for(int i=0;i<=rear;i++)
		cout<<q[i]<<" ";
	}
}
cout<<endl;
}
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<" circular queue\n";
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

