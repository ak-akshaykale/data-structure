#include<iostream>
using namespace std;
int MAX=5;
int stack[5];
int puc=0;

void push(int,int);
void pop(int);
int isEmpty();
int isFull();

int main()
{
	for(int i=0;i<MAX;i++)
	{
		int input;
		cout<<"Enter the Element: ";
		cin>>input;
		if(isFull())
		{
			cout<<"\nStack is Full";
		}
		else
		{
			push(input,i);
			puc++;
		}
	}
	for(int i=puc-1;i>=0;i--)
	{
		if(isEmpty())
		{
			cout<<"\nStack is Empty";
		}
		else
		{
			pop(i);
			puc--;
		}
	}
	return 0;
}
void push(int ele, int ind)
{
	stack[ind]=ele;
}
void pop(int ind)
{
	cout<<"\n"<<stack[ind];
	stack[ind]=0;
}
int isEmpty()
{
	if(puc==-1)
		return 1;
	else
		return 0;
	
}
int isFull()
{
	if(puc==MAX)
		return 1;
	else
		return 0;
}