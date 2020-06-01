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
		void dfs(int s)
		{
			vector<bool> v(vertex,false);
			stack<int>st;
			st.push(s);
		
			while(!st.empty())
			{
				s= st.top();
			    st.pop();
			   if(!v[s])
			   {
			   cout<<s<<" ";
			   v[s]=true;
	       	   }
				for(auto i=g[s].begin();i!=g[s].end();i++)
				{
					if(!v[*i])
					{
					  st.push(*i);
					}
				}
			}
			cout<<endl;
		}
};
int main()
{
    cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"target - to do dfs traversal of graph\n";
   /*
   algo for dfs traversal
   Step 1: SET STATUS=1(ready state) for each node in G 
   Step 2: Push the starting nodeAon the stack and set its STATUS=2(waiting state) 
   Step 3: Repeat Steps4and5until STACK is empty 
   Step 4: Pop the top node N. Process it and set its STATUS=3(processed state) 
   Step 5: Push on the stack all the neighbours ofNthat are in the ready state (whose STATUS=1) and set their STATUS=2(waiting state) [END OF LOOP]
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
   			g.dfs(s);
   			break;
   		
	}
   	
   }while(op!=4);

   

   return 0;
}

