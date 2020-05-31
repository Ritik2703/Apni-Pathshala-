/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int vertex;
	//	int weight;  .. for weighted graph
		node *next;
		node(int val)
		{
			vertex=val;
			next=NULL;
		}
};
int V,u,val;
node* gnode;
void creategraph(node *adj[],int v)
{
	node *n,*l;
	for(int i=0;i<v;i++)
	{
		l=NULL;
		cout<<"enter the neighbours of "<<i<<": "<<endl;
		cin>>u;
		for(int j=1;j<=u;j++)
		{
			cout<<"enter the neighbour "<<j<<" of "<<i<<": ";
			cin>>val;
			n=new node(val);
			if(adj[i]==NULL)
			adj[i]=n;
			else
			l->next=n;
			l=n;
		}
	}
	
}
void displaygraph(node *adj[],int v)
{
	node *p;
	for(int i=0;i<v;i++)
	{
		p=adj[i];
		cout<<"\nthe neighbours of node "<<i<<" are ";
		while(p!=NULL)
		{
			cout<<p->vertex<<" ";
			p=p->next;
		}
		
		
	}
}
void deletegraph(node *adj[],int v)
{
//	node *t, *p;
	for(int i=0;i<v;i++)
	{
	/*	p=adj[i];
		while(p!=NULL)
		{
			t=p;
			p=p->next;
			free(t);		
		}*/
		adj[i]=NULL;
	}
	cout<<"\ngraph is deleted\n";
}
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"graph structure\n";
   node *g[10];
   cout<<"enter no of vertices \n";
   cin>>V;
   for(int i=0;i<V;i++)
   g[i]=NULL;
   
   creategraph(g,V);
   displaygraph(g,V);
  deletegraph(g,V);
   //displaygraph(g,V);
   return 0;
}

