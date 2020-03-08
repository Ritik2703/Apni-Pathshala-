#include<bits/stdc++.h>
using namespace std;

class ll{
	public:
	int data;
	ll *next;
};

void printlist(ll* n)
{
	while(n!=NULL)
	{
		cout<< n->data <<" ";
		n = n->next;
	}
}


int main()
{

	ll *head = NULL;
	ll *second = new ll();
	ll *third = new ll();
	head=new ll();
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next= NULL;
	
	printlist(head);
	
	
	
	return 0;
}
