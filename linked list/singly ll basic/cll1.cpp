#include<bits/stdc++.h>
using namespace std;

class cll{
	public:
		int data;
		cll *next;
};
void cllpush(cll **poh,int new_data)
{
	cll *n= new cll();
	n->data= new_data;
	n->next= *(poh);
	*(poh)= n;
}

void cllinsertafter(cll *x,int new_data)
{
	if(x==NULL)
	{
		cout<<"can;t be null";
		return;
	}
	cll *n= new cll();
	n->data=new_data;
	n->next=x->next;
	*x->next=n;
}

void cllend(cll **x,int new_data)
{
	cll *n= new cll();
	cll *y= *x;
	n->data=new_data;
	n->next=*x;
	
	while(y->next!=NULL)
	y=y->next;
	
	y->next=n;
	return;
}

void printcll(cll *n)
{
	cll *t= n;
	if(n!=NULL)
	{
		do
		{
		cout<<t->data<<" -> ";
		t= t->next;
	}while(t!=n);
	}
}


int main()
{
	cll *head = new cll();
	
	
	
	printcll(head);
	return 0;
}
