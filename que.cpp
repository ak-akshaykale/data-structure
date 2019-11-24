#include<iostream>
using namespace std;
int que[5];
int rear=0,frnt=0;
void enqueue(int);
void  dequeue();
int main()
{
	
	enqueue(12);
	enqueue(13);
	enqueue(14);
	enqueue(15);
	enqueue(16);
	enqueue(17);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	return 0;
}
void enqueue(int a)
{
	if(rear!=5)
	{
		que[rear]=a;
		cout<<que[rear]<<" inserted"<<endl;
		rear++;
	}
	else
	{
		cout<<"\nQueue is full..";
	}
}
void dequeue()
{
	if(frnt!=rear)
	{
		cout<<endl<<que[frnt]<<" is deleted";
		frnt++;
	}
	else
	{
		cout<<"\nQueue is Empty..";
	}
}