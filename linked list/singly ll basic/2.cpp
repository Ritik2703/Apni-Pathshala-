/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int val;
class node{           // idea bnalo
	public:
		int data;
		node* next;
		node(int n)
		{
			data=n;
			next=NULL;
		}
};
node * createll(node *start)
{
	
	cout<<"enter number to be add in linked list\n";
	cout<<"enter -1 to end insertion in list\n";
	cin>>val;
	node *p;
	while(val!=-1)
	{
		node *n= new node(val);
		if(start==NULL)
		start=n;
		else
		{
			p=start;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=n;
		}
		cin>>val;		
	}
	return start;
}
void display(node *s)
{
	node *p=s;
	cout<<"linked list is ";
	while(p!=NULL)
	{
		cout<<p->data<<" -> ";
		p=p->next;
	}
	cout<<"NULL\n";
	
}
node *insertbeg(node *start)
{
	cin>>val;
	node *n= new node(val);
	n->next=start;
	
	start=n;
	return start;
}
node *insertend(node *start)
{
	cin>>val;
	node *n=new node(val);
	node *p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=n;
	return start;
}
int main()
{
	node *start=NULL;
	cout<<"create linked list \n";
	start = createll(start);
	 
	display(start);
	cout<<"insert node at beginning\nenter value to insert\n";
	start= insertbeg(start);
	display(start);
	cout<<"insert node at end\nenter value to insert\n";
	start=insertend(start);
	display(start);
   return 0;
}
