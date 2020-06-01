/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
	int n,pr,op;
class pq{
	public:
		int data;
		int priority;
		pq* next;
		pq(int n,int pr)
		{
			data=n;
			priority=pr;
			next=NULL;
		}
};
pq *q=NULL;
pq *insert(pq *q, int n,int pr)
{
	pq *p;
	p=new pq(n,pr);
	if(q==NULL|| pr< q->priority)
	{
		p->next=q;
		q=p;
	}
	else{
		pq *pp= q;
		while(pp->next!=NULL&&pp->next->priority<=pr)
		pp=pp->next;
		
		p->next== pp->next;
		pp->next=p;
		
	}
	return q;
}
int pop(){
	int n;
	pq * w=q;
	if(q==NULL)
	{
		cout<<"underflow\n";
	}
	else
	{
	    n= w->data;
		q=q->next;
		free(w);
	}
	return n;
}

void display()
{

	pq *r;
	r=q;
	if(q==NULL)
	cout<<"queue is empty\n";
	else{
		
		while(r!=NULL)
		{
			cout<<r->data<<" priority= "<<r->priority<<"  ";
			r=r->next;
		}
	}
	cout<<endl;
	
}
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"priority queue\n";
   do{
   	cout<<"choose the option\n";
   	cout<<"1. insert\n";
   	cout<<"2. delete\n";
   	cout<<"3. display\n";
   	cout<<"4. exit\n";
   
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cout<<"enter number to be inserted and its priority\n";
   			cin>>n>>pr;
   			q=insert(q,n,pr);
   			break;
   		case 2:
   			cout<<"deleted item is "<<pop()<<endl;
   			break;
   		case 3:
   			display();
   			break;
   		
	   }
   }while(op!=4);
   

   return 0;
}

