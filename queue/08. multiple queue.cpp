/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
#define max 10
int n,op,val;
int q[max];
int reara=-1,fronta=-1,rearb=max,frontb=max;
void inserta(int n)
{
	if(reara==rearb-1)
	cout<<"overflow\n";
	else{
		if(reara==-1&&fronta==-1)
		{
			reara=fronta=0;
			q[reara]=n;
		}
		else
		q[++reara]=n;
	}
}
void insertb(int n)
{
	if(reara==rearb-1)
	cout<<"overflow\n";
	else{
		if(rearb==max&&frontb==max)
		{
			rearb=frontb=max-1;
			q[rearb]=n;
		}
		else
		q[--rearb]=n;
	}
	
}

void popa()
{
	if(fronta==-1&&reara==-1)
	cout<<" queue a is empty\n";
	else
	{
		cout<<" deleted element is "<<q[fronta]<<endl;
		fronta++; 
		if(fronta>reara)
		fronta=reara=-1;
	}
}

void popb()
{
	if(frontb==max&&rearb==max)
	cout<<"queue b is empty\n";
	else
	{
		cout<<"deleted element is "<<q[frontb]<<endl;
		frontb--;
		if(frontb<rearb)
		frontb=rearb=max;
			}
}
void displaya()
{
	if(fronta==-1)
	cout<<"queue a is empty\n";
	else
	{
		for(int i=fronta;i<=reara;i++)
		cout<<q[i]<<" ";
		cout<<endl;
	}
	
}
void displayb()
{
	if(frontb==max)
	cout<<"queue b is empty\n";
	else
	{
		for(int i=frontb;i>=rearb;i--)
		cout<<q[i]<<" ";
		cout<<endl;
	}
	
}
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"multiple queue\n";
   do{
   	cout<<"choose the option\n";
   	cout<<"1. insert in queue A\n";
   	cout<<"2. insert in queue B\n";
   	cout<<"3. delete from queue A\n";
   	cout<<"4. delete from queue B\n";
   	cout<<"5. display queue A\n";
   	cout<<"6. display queue B\n";
   	cout<<"7. exit\n";
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cin>>n;
   			inserta(n);
   			break;
   		case 2:
   			cin>>n;
   			insertb(n);
   			break;
   		case 3:
   			popa();
   			break;
   		case 4:
   			popb();
   			break;
   		case 5:
   			displaya();
   			break;
   		case 6:
   			displayb();
   			break;
	   }
   	
   }while(op!=7);
   

   return 0;
}

