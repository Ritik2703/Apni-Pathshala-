/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int n,op,val;
class node{
	public:
		int data;
		node* next;
		node(int n)
		{
			data=n;
		}
};
class Queue{
	public:
		node* front;
		node* rear;
		Queue()
		{
			front=rear=NULL;
		}
};
Queue *q=new Queue();
Queue *insert(int v)
{
	node *n= new node(v);
	if(q->front==NULL)
	{
		q->front=q->rear=n;
		q->front->next=q->rear->next=NULL;
	}
	else
	{
		q->rear->next=n;
		q->rear=n;
		q->rear->next=NULL;
	}
	return q;
}
void display()
{
	node *n=q->front;
	if(n==NULL)
	cout<<"queue is empty\n";
	else
	{
		cout<<"queue is ";
		while(n!=q->rear)
		{
			cout<<n->data<<" ";
			n=n->next;
		}
		cout<<n->data<<endl;
	}
}
int deletee()
{
	if(q->front==NULL)
	cout<<"underflow\n";
	else
	val= q->front->data;
	q->front=q->front->next;
	return val;
}
int peek()
{
	if(q->front==NULL)
	cout<<"underflow\n";
	else
	return q->front->data;
	
}

int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"linear queue using linked list\n";
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
   			q=insert(n);
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

