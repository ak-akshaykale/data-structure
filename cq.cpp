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
	enque(10);

	//deque();
	enque(110);
	enque(1110);
	enque(1110);
	enque(11110);
	//enque(111110);
	//enque(1111110);
	//enque(11111110);
	//deque();
	deque();
	deque();
	deque();
	deque();
	deque();
	//display();
	return 0;
}
void enque(int data)
{
	cout<<rear<<endl;
	if((rear+1)==front)
	{
		cout<<"\nCircular Queue full"<<endl;
	}
	else
	{
		que[rear]=data;
		cout<<"the element "<<que[rear]<<" is in the que"<<endl;
		rear++;
	}	
}
void display()
{
	for(int i=rear;i<front;i++)
	{
		cout<<que[i]<<endl;
	}
}
void deque()
{
	if(front==rear)
	{
		cout<<"\nCircular Queue is empty"<<endl;
	}
	else
	{
		
		cout<<endl<<que[front]<<" is deleted"<<endl;
		front++;
	}
}