#include<iostream>
#include<stdlib.h>
using namespace std;
void insert(int data,class node*,class node*);
void display(class node*);
class node
{
	public:
		int data;
		node *next;
		node *prev;
};
int main()
{
	node *n1 = new node;
	node *n2= new node;
	insert(10,n1,n2);
	insert(20,n2,n1);
	//cout<<n1->data<<endl;
	//cout<<n2->data<<endl;
	node *temp=n1;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
	}
	return 0;	
}
void insert(int d,node *n1,node *n2)
{
	n1->data=d;
	n1->next=n2;
	n1->prev=NULL;
}