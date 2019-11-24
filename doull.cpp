#include<iostream>
using namespace std;
class dnode *head;
class dnode
{
	public:
		int data;
		dnode *next;
		dnode *prev;
};
void created(int data)
{	
	if(head==NULL)
	{
		head=(dnode*) malloc(sizeof(dnode));
		head->data=data;
		head->next=NULL;
		head->prev=NULL;
	}
	else
	{	
		dnode *ptr = (dnode*) malloc(sizeof(dnode));
		ptr->data=data;	
		dnode *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;	
		}
		temp->next=ptr;
		ptr->next=NULL;
		ptr->prev=temp;
	}
}
void display(dnode *p)
{
	while(p!=NULL)
	{
		cout<<"\n"<<p->data;
		p=p->next;
	}
}
void displayprev(dnode *p)
{
	while(p->next!=NULL)
	{
	//	cout<<"\n"<<p->data;
		p=p->next;
	}
	while(p!=NULL)
	{
		cout<<"\n"<<p->data;
		p=p->prev;
	}

}
int main()
{
	head=NULL;
	created(10);
	created(20);
	created(30);
	created(40);
	created(50);
	created(60);
	created(70);
	/*int a;
	cout<<"\nEnter the no. of nodes: ";
	cin>>a;
	for(int i=0;i<a;i++)
	{
		int input;
		cout<<"\nEnter the element:  ";
		cin>>input;
		created(input);
	}*/
	cout<<"\nTraveling by next pointer: \n";
	display(head);
	cout<<"\nTraveling by previous pointer: \n";
	displayprev(head);
	return 0;
}