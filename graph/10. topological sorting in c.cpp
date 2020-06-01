/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/


#include<bits/stdc++.h>
#define max 7
using namespace std;
int n,m,u,v,val,op;
int g[max][max];
void creategraph()
{
	cout<<"enter the vertices edge which are connected\nenter -1 to end add edges\n";
	cin>>u>>v;
	while(u!=-1)
	{
	
		g[u][v]=1;
		//g[v][u]=1;
			cin>>u>>v;
	}
}
void display()
{
	for(int i=1;i<=max;i++)
	{
	for(int j=1;j<=max;j++)
	{
		cout<<g[i][j]<<" ";
	}
	cout<<endl;
}
}
int ind(int n)
{
	int c=0;
	for(int i=1;i<=max;i++)
	{
		if(g[i][n]==1)
		c++;
	}
	return c;
}
int main()
{
	int q[max],rear=-1,front=0,j=0,topsort[max],in[max];
   creategraph();
   display();
   for(int i=1;i<=max;i++)
   {
   	in[i]= ind(i);
   	if(in[i]==0)
   	{
   		q[++rear]=i;
    }
}
    while(front<=rear)
    {
    	int val=q[front++];
    	topsort[j]= val;
    	j++;
    	for(int node=1;node<=max;node++)
    	{
    		if(g[val][node]==1)
    		{
    			g[val][node]=0;
    			--in[node];
    			if(in[node]==0)
    			q[++rear]=node;
			}
		}
	}
   
   cout<<"\ntopological sort of given graph is\n";
   for(int i=0;i<max;i++)
   cout<<topsort[i]<<" ";
   

   return 0;
}

