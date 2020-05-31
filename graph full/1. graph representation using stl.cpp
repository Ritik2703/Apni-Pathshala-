/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int n,op,u,v,wt,V;
class graph{
	
	public:
		void addedge(vector<int> g[],int u,int v)
		{
			g[u].push_back(v);
			g[v].push_back(u);
		}
		void waddedge(vector<pair<int,int>> g[],int u,int v,int wt)
		{
			g[u].push_back(make_pair(v,wt));
			g[v].push_back(make_pair(u,wt));
		}
		
		void printgraph(vector<int> g[],int V)
		{
		 cout<<"list represntation of unweighted graph is\n";	
			for(int i=0;i<V;i++)
			{
				cout<<"Node "<<i<<" makes edge with node "<<endl;
				for(auto x: g[i])
				cout<<" -> "<<x;
					cout<<endl;
			}
		
		}
		void printwgraph(vector<pair<int,int>>g[],int V)
		{
			cout<<"list represntation of weighted graph is\n";
			for(int i=0;i<V;i++)
			{
				cout<<"node "<<i<<" makes edge with ";
				for(auto  x= g[i].begin();x!=g[i].end();x++)
					cout<<" node "<<x->first<<" with edge weight = "<<x->second<<endl;
					cout<<endl;
			}
		}
};

int main()
{
	
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"representation of weighted and unweighted graph using stl\n";
   	graph G;
   	  	cout<<"no of vertices in graph\n";
   	  	cin>>V;
   	  	vector<int> g[V];
   	  	vector<pair<int,int>> gw[V];
   do{
   	cout<<"choose the option\n";
   	cout<<"1. add edge\n";
   	cout<<"2. add edge for weighted graph\n";
   	cout<<"3. print unweighted graph\n";
   	cout<<"4. print weighted graph\n";
   	cout<<"5. exit\n";
   	cin>>op;
   	switch(op)
   	{     	
   		case 1:
   			cin>>u>>v;
   			G.addedge(g,u,v);
   			break;
   		case 2:
   			cin>>u>>v>>wt;
   			G.waddedge(gw,u,v,wt);
   			break;
   		case 3:
   			G.printgraph(g,V);
   			break;
	    case 4:
		    G.printwgraph(gw,V);	
	   }
   }while(op!=5);
   
   

   return 0;
}

