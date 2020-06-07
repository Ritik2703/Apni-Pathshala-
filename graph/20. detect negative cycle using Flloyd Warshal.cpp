/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
	    int V,c=0; cin>>V;
	    int graph[V][V]; 
		int d[V][V];
	    for(int i=0;i<V;i++){
	        for(int j=0;j<V;j++){
	            cin>>graph[i][j];
	            d[i][j]=graph[i][j];
	        } 
	    }
	    for(int k=0;k<V;k++){
	        for(int i=0;i<V;i++){
    	        for(int j=0;j<V;j++){
    	            if(d[i][j]>d[i][k]+d[k][j]) d[i][j]=d[i][k]+d[k][j];
    	        } 
    	    }
	    }
	    for(int i=0;i<V;i++){
	        for(int j=0;j<V;j++){
	            if(d[i][j]==10000000) cout<<"INF"<<" ";
	            else cout<<d[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	    for (int i = 0; i < V; i++) 
	    {
        if (d[i][i] < 0) 
            {
                   c++;
				   cout<<"Negative Cycle exists\n" ;
				   break;
        }          
    }
    if(c==0)
    cout<<"Cycle not exists\n";
          
	}
	return 0;
}

