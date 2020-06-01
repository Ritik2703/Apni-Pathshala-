/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
#define n 4
#define infinity 9999
void display(int g[][4],int v)
{
	cout<<"the matrix is\n";
	for(int i=0;i<v;i++)
	{
   for(int j=0;j<v;j++)
   cout<<g[i][j]<<" ";
   cout<<endl;
}
}
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"Modifed Warshall's algorithm\n";
   int g[n][n],P[n][n];
   int v; cin>>v;
   for(int i=0;i<v;i++)
   for(int j=0;j<v;j++)
   cin>>g[i][j];
   
   display(g,v);
   for(int i=0;i<v;i++)
   {
   for(int j=0;j<v;j++)
   {
     if(g[i][j]==0)
	 P[i][j]=infinity; 
	 else
	 P[i][j]=g[i][j]; 	
   }
   }
   for(int k=0;k<v;k++)
   {
   	for(int i=0;i<v;i++)
   	{
   		for(int j=0;j<v;j++)
   		{
   			if(P[i][j]<=P[i][k]+P[k][j])
   			P[i][j]=P[i][j];
   			else
   			P[i][j]=P[i][k]+P[k][j];
	    }
	}
   }

   display(P,n);
   
   
   

   return 0;
}

