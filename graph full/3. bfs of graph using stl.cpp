/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int v,u,n,val,V,op,s;
class Graph{
	int vertex;
	list<int> *g;
	public:
		Graph(int V)
		{
			vertex=V;
			g= new list<int>[V];
		}
		void addedge(int u,int v)
		{
			g[u].push_back(v);
		//	g[v].push_back(u);
		}
		void print()
		{
			for(int i=0;i<vertex;i++)
			{
				cout<<"adjaces nodes with node "<<i<<" is: ";
				for(auto x:g[i])
				cout<<x<<" ";
				cout<<endl;
			}
		}
		void bfs(int s)
		{
			bool visited[vertex];
			for(int i=0;i<vertex;i++)
			visited[i]=false;
			
			queue<int> q;
			visited[s]=true;
			q.push(s);
			while(!q.empty())
			{
				s=q.front();
				cout<<s<<" ";
				q.pop();
				for(auto i= g[s].begin();i!=g[s].end();++i)
				{
					if(!visited[*i])
					{
						visited[*i]=true;
						q.push(*i);
					}
				}
				
				
			}
		}
};
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"target - to do bfs traversal of graph\n";
   /*
   algo for bfs traversal
   
   Step 1: SET STATUS=1(ready state) for each node in G 
   Step 2: Enqueue the starting node A and set its STATUS=2 (waiting state) 
   Step 3: Repeat Steps4and5until QUEUE is empty 
   Step 4: Dequeueanode N. Process it and set its STATUS=3 (processed state).
   Step 5: Enqueue all the neighbours of N that are in the ready state (whose STATUS=1) and set their STATUS=2 (waiting state) [END OF LOOP] 
   Step 6: EXIT
   */
   cout<<"no of vertices in graph\n";
   cin>>V;
   Graph g(V);
   do{
   	cout<<"choose the option: \n";
   	cout<<"1. add edge\n";
   	cout<<"2. print graph\n";
   	cout<<"3. bfs traversal\n";
   	cout<<"4. exit\n";
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cin>>u>>v;
   			g.addedge(u,v);
   			break;
   		case 2:
   			g.print();
   			break;
   		case 3:
   			cout<<"starting node is ";
   			cin>>s;
   			cout<<endl;
   			g.bfs(s);
   			break;
   		
	}
   	
   }while(op!=4);

   return 0;
}

