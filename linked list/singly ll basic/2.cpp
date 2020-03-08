#include<bits/stdc++.h>
using namespace std;

class ll{
	public:
		int data;
		ll *next;
};
void push(ll **poh,int new_data)
{
	ll *n= new ll();
	n->data=new_data;
	n->next= *(poh);
	*(poh)=n;
}

void insertafter(ll *pn,int new_data)
{
	if(pn == NULL)
	{
		cout<<"the given node can't be Null"<<endl;
		return;
	}
	ll *n= new ll();
	n->data= new_data;
	n->next= pn->next;
	pn->next= n;
}

void append(ll **poh,int new_data)
{
	ll *n= new ll();
	
	ll *last= *poh;
	n->data=new_data;
	n->next=NULL;
	if(*poh == NULL)
	{
		*poh = n;
		return;
	}
	while(last->next!=NULL)
	last=last->next;
	
	last->next= n;
	return;
	
}


void printlist(ll* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	ll *head = NULL;
	
	cout<<" how many nodes to be pushed"<<endl;
	int a,x;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>x;
		push(&head,x);
	}
	cout<<" node to be pushed at end"<<endl;
	cin>>x;
	append(&head,x);
	
	cout<<" node to be pushed after"<<endl;
	cin>>x;
	insertafter(head->next,x);
	
	printlist(head);
	
	
	
	return 0;
}
