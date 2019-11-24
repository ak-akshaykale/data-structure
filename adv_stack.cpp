#include<iostream>
using namespace std;
void push(int*, int,int);
void pop(int*,int);
int isEmpty(int);
int isFull(int,int);
void display(int*,int);
int main()
{
	int stack[5];
	int max=5;
	int top=0;
	int ch;
	do
	{
	cout<<"\n---MENU--\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter the Choice:  ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			if(isFull(max,top)==0)
			{
				int input;
				cout<<"\nEnter the Element : ";
				cin>>input;
				push(stack,input,top);
				top++;
			}
			else
			{
				cout<<"\nStack is Full....!";
			}
			break;
		case 2:
			if(isEmpty(top)==0)
			{
				pop(stack,(--top));
				//top--;
			}
			else
			{
				cout<<"\nStack is Empty...!";
			}
			break;
		case 3:
			display(stack,top);
			break;
		case 4:
			break;
			//return 0;
		default:
			cout<<"\nInvalid Choice..!";
	}
	}while(ch<4);
	return 0;
}
void push(int *s, int ele, int ind)
{
	s[ind]=ele;
	cout<<endl<<s[ind]<<" is Pushed into Stack";
}
void pop(int *s,int ind)
{
	cout<<endl<<s[ind]<<" is Deleted From Stack";
	s[ind]=0;
}
int isEmpty(int tp)
{
	if(tp==0)
		return 1;
	else
		return 0;	
}
int isFull(int m,int tp)
{
	if(m==tp)
		return 1;
	else
		return 0;
}
void display(int *s,int top)
{
	cout<<endl;
	for(int i=top-1;i>=0;i--)
	{
		cout<<"| "<<s[i]<<" |"<<endl;
	}
	cout<<"-------\n\n";	
}