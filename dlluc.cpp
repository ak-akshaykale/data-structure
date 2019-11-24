#include<iostream>
using namespace std;
void insert(class Node*,int);
void join(class Node*,class Node*);
void display(class Node*);
class Node
{
	public:
		int data;
		Node *next;
};
int main()
{
	Node n1;
	Node n2;
	insert(&n1,20);
	insert(&n2,30);
	join(&n1,&n2);
	display(&n1);
	cout<<endl;
	Node *dn1=(Node*)malloc(sizeof(Node));
	Node *dn2=(Node*)malloc(sizeof(Node));
	insert(dn1,20);
	insert(dn2,30);
	join(dn1,dn2);
	display(dn1);
	return 0;
}
void insert(Node *p,int data)
{
	p->data=data;
	p->next=NULL;
}
void join(Node *p,Node *q)
{
	p->next=q;
	q->next=NULL;
}
void display(Node *ac)
{
	while(ac!=NULL)
	{
		cout<<ac->data;
		cout<<" | "<<ac;
		cout<<" | "<<&(ac->data);
		cout<<" | "<<&(ac->next)<<endl;
		ac=ac->next;
	}
}