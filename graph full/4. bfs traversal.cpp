/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
#define max 5
void bfs(int g[][max],bool v[],int s)
{
	int q[max],rear=-1,front=-1;
	q[++rear]=s;
	v[s]=true;
	while(rear!=front)
	{
		s=q[++front];
		cout<<char(s+65);
		for(int i=0;i<max;i++)
		{
			if(g[s][i]==1&&v[i]==0)
			{
				q[++rear]=i;
				v[i]=true;
			}
		}
	}
}
int main()
{
   bool v[max];
   int adj[max][max],s;
   cout<<"enter the adjacency matrix\n";
   for(int i=0;i<max;i++)
   {
   	v[i]=false;
   for(int j=0;j<max;j++)
   cin>>adj[i][j];
}
   cout<<"source node for bfs ";
   cin>>s;
   bfs(adj,v,s);
   return 0;
}

