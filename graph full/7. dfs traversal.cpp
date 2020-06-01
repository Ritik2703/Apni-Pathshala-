/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
#define V 5
using namespace std;

int n,s,i;
void dfs(int g[][V],bool visit[],int s)
{
	int st[V],top=-1;
	cout<<char(s+65)<<" ";
	visit[s]=true;
	st[++top]=s;
	while(top!=-1)
	{
		s=st[top];
		for(int i=0;i<V;i++)
		{
			if(g[s][i]&&visit[i]==false)
			{
				st[++top]=i;
				cout<<char(i+65)<<" ";
				visit[i]=true;
				break;
			}
		}
		if(i==V)
		top--;
	}
	cout<<endl;
}
int main()
{
  // cout<<"no of vertices is "<<endl;
  // cin>>V;
   int g[V][V];
   bool visit[V]={0};
   cout<<"dfs traversal of graph is "<<endl;
   for(int i=0;i<V;i++)
   for(int j=0;j<V;j++)
   cin>>g[i][j];
   cout<<"enter source node ";
   cin>>s;
   cout<<"\ndfs traversal is ";
   dfs(g,visit,s);
   

   return 0;
}

