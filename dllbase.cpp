#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *n1 = (struct node*)malloc(sizeof(struct node));
	n1->data=11;
	n1->next=NULL;

	struct node *n2 = (struct node*)malloc(sizeof(struct node));
	n2->data=12;
	n2->next=NULL;
	n1->next=n2;
	
	struct node *n3=(struct node*)malloc(sizeof(struct node));
	n3->data=44;
	n3->next=NULL;
	n2->next=n3;
	
	//accesing elements
	struct node *acc=n1;
	while(acc!=NULL)
	{
		cout<<acc->data<<endl;
		acc=acc->next;
	}
	//cout<<n1->data;
	return 0;
}