/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 10
int n,mi,t,val,u,v,k,cost,s,g[MAX][MAX],tree[MAX][MAX];
void creategraph()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>g[i][j];
}
int mst(int s)
{
	int visit[MAX],d[MAX],parent[MAX];
	for(int i=1;i<=n;i++)
	{
		d[i]=g[s][i];
		visit[i]=0;
		parent[i]=s;
	}
	visit[s]=1;
	cost=0;
	k=1;
	for(int i=1;i<n;i++)
	{
		mi=9999;
		for(int j=1;j<=n;j++)
		{
			if(visit[j]==0&& d[j]<mi)
			{
				mi=d[j];
				u=j;
				cost+=d[u];
			}
		}
		visit[u]=1;
		tree[k][1]=parent[u];
		tree[k++][2]=u;
		for(int v=1;v<=n;v++)
		{
			if(visit[v]==0&& (g[u][v]<d[v]))
			{
				d[v]=g[u][v];
				parent[v]=u;
			}
			
		}
	}
	return cost;
	
}
void display(int c)
{
	cout<<"the edges of the minimum spanning tree are\n";
	for(int i=1;i<n;i++)
	cout<<tree[i][1]<<" "<<tree[i][2]<<endl;
	
	cout<<"total cost is "<<cost;
}

int main()
{
	creategraph();
	cout<<"enter source node\n";
	cin>>s;
	t= mst(s);
	display(t);
   return 0;
}

