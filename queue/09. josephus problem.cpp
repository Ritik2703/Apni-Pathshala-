/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int d;
		node *next;
};
node *start,*ptr, *n;
int jos(int n,int k) //using recursion
{
	if(n==1)
	return 1;
	else
	return (jos(n-1,k)+k-1)%n+1;
}
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"Josephus Problem using cll\n";
   int n,k;
   cin>>n>>k;
   start=new node();
   start->d=1;
   ptr=start;
   for(int i=2;i<=n;i++)
   {
   	node*n =new node();
   	ptr->next=n;
   	n->d=i;
   	n->next=start;
   	ptr=n;
   }
   for(int i=n;i>1;i--)
   {
   	for(int j=0;j<k-1;++j)
	   ptr=ptr->next;
	ptr->next= ptr->next->next;
   }
   cout<<ptr->d<<endl;
   cout<< jos(n,k);
   
   

   return 0;
}

