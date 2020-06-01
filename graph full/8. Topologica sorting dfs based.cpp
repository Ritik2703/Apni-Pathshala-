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
			
			while(u!=-1)
			{
			
			g[u].push_back(v);
			cin>>u>>v;
		}
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
		void tplutil(int so,bool vst[],stack<int> &st)
		{
			vst[so]=true;
			
			for(auto it=g[so].begin();it!=g[so].end();++it)
			{
				if(!vst[*it])
				{
				tplutil(*it,vst,st);
			    }
			}
			st.push(so);
			
			
		}
		void tpl()
		{
          stack<int>st;
          bool vst[vertex];
          for(int i=0;i<vertex;i++)
          vst[i]=false;
          for(int i=0;i<vertex;i++)
          {
            if(vst[i]==false)
               tplutil(i,vst,st);
          }
          
          while(!st.empty())
          {
          	cout<<st.top()<<" ";
          	st.pop();
		  }
		  
		  	cout<<endl;
		}
		
};
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"target - to do topological of graph\n";
   /*
   algo for toplogical sorting
   Step 1: Find the in-degree INDEG(N) of every node graph 
   Step 2: Enqueue all the nodes with a zero in-degree 
   Step 3: Repeat Steps4and5until the QUEUE is empty
   Step 4: Remove the front nodeNof the QUEUE by setting FRONT=FRONT+1 
   Step 5: Repeat for each neighbourMof node N: 
          a) Delete the edge from N to M by setting INDEG(M)=INDEG(M)-1 
		  b) IF INDEG(M) =,then Enqueue M, that is, addMto the rear of the queue [END OF INNER LOOP] [END OF LOOP] 
   Step 6: Exit
  
   */
   cout<<"no of vertices in graph\n";
   cin>>V;
   Graph g(V);
   do{
   	cout<<"choose the option: \n";
   	cout<<"1. add edge\n";
   	cout<<"2. print graph\n";
   	cout<<"3. topological sorting \n";
   	cout<<"4. exit\n";
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cout<<"enter -1,-1 to end adddedge\n";
   			cin>>u>>v;
   			g.addedge(u,v);
   			break;
   		case 2:
   			g.print();
   			break;
   		case 3:
   			cout<<"topological sorting of graph is \n";
   			g.tpl();
   			break;
   		
	}
   	
   }while(op!=4);
return 0;
}

