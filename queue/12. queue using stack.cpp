/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/

#include<stdio.h>
#include<iostream>
using namespace std;

#define SIZE 10
int stack[10];
int top = -1;

int pop() {
    if(top != -1) 
	return stack[top--];
}
void push(int data) {
    if(top < SIZE)
	 stack[++top] = data;
}
void enqueue(int data) {
    push(data);
}
int dequeue() {
    if(top == 0)  return pop();
    int data = pop();
    int value = dequeue();
    push(data);
    return value;
}
int peek()
{
	return pop();
}
void display()
{
	for(int i=0;i<=top;i++)
	std::cout<<stack[i]<<" ";
	std::cout<<std::endl;
}

int n,op;
int main(void) {
     cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"queue using stack\n";
   
   do{
   	cout<<"choose the option\n";
   	cout<<"1. push in queue\n";
   	cout<<"2. pop from queue\n";
   	cout<<"3. peek in queue\n";
	cout<<"4. display queue\n";
   	cout<<"5. exit\n";
   	
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cin>>n;
   			enqueue(n);
   			break;
   			
   		case 2:
   			cout<<"deletd value is "<<dequeue()<<endl;
   			break;
   		case 3:
   			cout<<"top of queue is "<<peek()<<endl;
   			break;
   		case 4:
   			display();
   			break;
	   }
   }while(op!=5);
    return 0;

}
