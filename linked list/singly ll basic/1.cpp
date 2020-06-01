/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
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
int main()
{
	int val;
	cin>>val;
	node *p=new node(val);   //declare kro or memory do fir value dalvo do..
    cin>>val;
    node *q= new node(val);
    p->next=q;
    while(p!=NULL)
    {
	
    cout<<"data of node is "<<p->data<<" ";
    p=p->next;
}
   

   return 0;
}

