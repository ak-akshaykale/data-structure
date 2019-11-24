#include<iostream>
using namespace std;
class cnode *head;
class cnode
{
	public:
		int data;
		cnode *prv;
		cnode *next;
};
void create(int data)
{
	if(head==NULL)
	{
		head=(cnode*)malloc(sizeof(cnode));
		head->data=data;
		head->prv=NULL;
		head->next=NULL;
	}
	else
	{
		cnode *ne=(cnode*)malloc(sizeof(cnode));
		ne->data=data;
		
		cnode *tmp=head;
		while(tmp->next!=NULL)
		{
			tmp=tmp->next;
		}
		tmp->next=ne;
		ne->prv=tmp;
	}
	cnode *tmp=head;
	/*while(tmp->next!=NULL)
	{
		tmp=tmp->next;
	}
	tmp->next=head;
	head->prv=tmp;*/
}
void display(cnode *p)
{
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
	}
}
int main()
{
	head=NULL;
	create(50);
	create(60);
	create(70);
	display(head);
	return 0;
}