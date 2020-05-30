/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
#define max 10
int n,val,op;
int q[max];
int Left=-1,Right=-1;
#define left Left
#define right Right
void insertright(int n)
{
//	left=-1,light=-1;
	
	if((left==0&&right==max-1)||(left==right+1))
	cout<<"overflow\n";
	if(left==-1)
{
		left=right=0;
	}
	else
	{
		if(right==max-1)
		right=0;
		else
		right=right+1;
	}
	q[right]=n;
}
void insertleft(int n)
{
	if((left==0&&right==max-1)||(left==right+1))
	cout<<"overflow\n";
	if(left==-1)
	{
		left=right=0;
	}
	else
	{
		if(left==0)
		left=max-1;
		else
		left=left-1;
		
	}
	q[left]=n;
}
int deleteright()
{
	if(left==-1)
	cout<<"underflow\n";
	val= q[right];
	if(left==right)
	left=right=-1;
	else{
		if(right==0)
		right=max-1;
		else
		right=right-1;
	}
	return val;
}
int deleteleft()
{
	if(left==-1)
	cout<<"underflow\n";
	val= q[left];
	if(left==right)
	left=right=0;
	else
	{
		if(left==max-1)
		left=0;
		else
		left=left+1;
	}
	return val;
}
void display()
{
   if(left==-1&&right==-1)
   cout<<"dequeue is empty\n";
   if(left<=right)
   {
   	for(int i=left;i<=right;i++)
   	cout<<q[i]<<" ";
   }
   else{
   	
   for(int i=left;i<max;i++)
   cout<<q[i]<<" ";
   for(int i=0;i<=right;i++)
   cout<<q[i]<<" ";
}
cout<<endl;
}
void indeq()
{
	do{
	cout<<"choose the option\n";
   	cout<<"1. insert at right\n";
   	cout<<"2. delete from left\n";
   	cout<<"3. delete from right\n";
   	cout<<"4. display\n";
   	cout<<"5. exit\n";
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cout<<"enter element to be pushed\n";
   			cin>>n;
   			insertright(n);
   			break;
   		case 2:
   			cout<<"successfully delted\ndeleted element is "<<deleteleft()<<endl;
   			break;
   		case 3:
   		    	cout<<"successfully delted\ndeleted element is "<<deleteright()<<endl;
   		    break;
   		case 4:
   			display();
   			break;
   		
	   }
   	
   }while(op!=5); 
}
void outdeq()
{
	do{
	cout<<"choose the option\n";
   	cout<<"1. insert at right\n";
   	cout<<"2. insert at left\n";
   	cout<<"3. delete from left\n";
   	cout<<"4. display\n";
   	cout<<"5. exit\n";
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cout<<"enter element to be pushed\n";
   			cin>>n;
   			insertright(n);
   			break;
   		case 2:
   			cout<<"enter element to be pushed\n";
   			cin>>n;
   			insertleft(n);
   			break;
   		case 3:
   		    cout<<"successfully delted\ndeleted element is "<<deleteleft()<<endl;
   		    break;
   		case 4:
   			display();
   			break;
   		
	   }
   	
   }while(op!=5); 
}
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
    cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<" double ended queue\n";
   do{
   	   cout<<"choose the option\n";
   	   cout<<"1. input restricted deque -- means insert from one end and delete from both ends\n";    
   	   cout<<"2. output restricted deque -- means insert from both ends and delete from one end\n";
   	   cout<<"3. exit\n";
   	   cin>>op;
   	   switch(op)
   	   {
   	   	case 1:
   	   		indeq();
   	   		break;
   	   	case 2:
   	   		outdeq();
   	   		break;
		  }
   }while(op!=3);
   	
   return 0;
}

