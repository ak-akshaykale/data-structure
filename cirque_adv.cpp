#include<iostream>
using namespace std;
int que[5];
int front=0,rear=0;
int setq=0,setf=0;
void enque(int);
void deque();
void display();
int main()
{
	int ch;
	do
	{
		cout<<"\n1. Enqueue\n2. Dequeue\nenter Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				int a;
				
			case 2:
			case 3:
			default:
		}
	}
	while()
	//display();
	return 0;
}
void enque(int data)
{
	//cout<<"\ninsert :"<<rear<<"  "<<front;
	if((front==0 && rear==0) && setq==0)
	setq=1;

	if(( (rear%5)!=front ) || setq==1)
	{
		que[rear]=data;
		cout<<"the element "<<que[rear]<<" is in the que"<<endl;
		rear++;
		rear=rear%5;
		setq=2;
	}
	else
	{
		cout<<"\nCircular Queue full"<<endl;
	}	
}
void display()
{
	int i=rear;
	while(i!=front)
	{
		cout<<que[i]<<endl;
		
	}
}
void deque()
{
	//cout<<"\nDelete :"<<rear<<"  "<<front;
	if((rear==0)&&(front==0))
	{
		cout<<endl<<que[front]<<" is deleted"<<endl;
		front++;
		setq=0;
		setf=1;
	}
	else if(((front%5)==rear))
	{
		cout<<"\nCircular Queue is empty"<<endl;
	}
	else
	{
		front=front%5;
		cout<<endl<<que[front]<<" is deleted"<<endl;
		front++;
	}
}