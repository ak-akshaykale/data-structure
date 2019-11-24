#include<iostream>
using namespace std;
void addnode(int,struct node*);
void connodes(struct node*,struct node*);
void display(struct node*);
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node ns,n2;
	addnode(10,&ns);
	addnode(20,&n2);
	connodes(&ns,&n2);
	display(&ns);
	return 0;
}
void display(struct node *q)
{
	while(q!=NULL)
	{
	cout<<"\n"<<q->data;
	q=q->next;
	}
}
void addnode(int d, struct node *p)
{
	p->data=d;
	p->next=NULL;
}
void connodes(struct node *p, struct node *q)
{
	p->next=q;
}