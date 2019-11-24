#include<iostream>
#include<stdlib.h>
using namespace std;
void insert(int,struct node*,struct node*);
struct node
{
	int data;
	struct node *next;
};
int main()
{
	//insert at rear
	struct node *n1 = (struct node*)malloc(sizeof(struct node));
	struct node *i=n1;
	insert(10,i,n1);
	struct node *n2 = (struct node*)malloc(sizeof(struct node));
	i=n1;
	insert(20,i,n2);
	struct node *n3=(struct node*)malloc(sizeof(struct node));
	i=n2;
	insert(30,i,n3);
	struct node *n4=(struct node*)malloc(sizeof(struct node));
	i=n3;
	insert(40,i,n4);
	//accesing elements
	struct node *acc=n1;
	while(acc!=NULL)
	{
		cout<<acc->data;
		cout<<" | "<<acc;
		
		acc=acc->next;
	}
	//cout<<n1->data;
	return 0;
}
void insert(int data, struct node *h,struct node *n)
{
	h->next=n;
	n->data=data;
	n->next=NULL;
}