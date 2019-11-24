#include<iostream>
using namespace std;
struct tree
{
	char data;
	struct tree *left;
	struct tree *right;
};
void inorder(struct tree *in)
{
	cout<<"call\n";
	if(in==NULL)
	{
		return;
	}
	//cout<<"\nBefore in";
	inorder(in->left);
	//cout<<"\nAfter out";
	//cout<<in->data;
	//inorder(in->right);
}
void preorder(struct tree *pre)
{
	if(pre==NULL)
	return;
	
	cout<<pre->data;
	preorder(pre->left);
	preorder(pre->right);
}
void postorder(struct tree *post)
{
	if(post==NULL)
	return;

	postorder(post->left);
	postorder(post->right);
	cout<<post->data;
}
int main()
{
	struct tree n1;
	n1.data='A';
	n1.left=NULL;
	n1.right=NULL;

	struct tree n2;
	n2.data='B';
	n2.left=NULL;
	n2.right=NULL;
	n1.right=&n2;

	struct tree n3;
	n3.data='C';
	n3.left=NULL;
	n3.right=NULL;
	n1.left=&n3;

	struct tree n4;
	n4.data='D';
	n4.left=NULL;
	n4.right=NULL;
	n3.right=&n4;
	
	struct tree n5;
	n5.data='E';
	n5.left=NULL;
	n5.right=NULL;
	n3.left=&n5;

	struct tree n6;
	n6.data='F';
	n6.left=NULL;
	n6.right=NULL;
	n2.right=&n6;

	cout<<"Inorder : ";
	inorder(&n1);
	
	cout<<"\nPreorder : ";	
	preorder(&n1);

	cout<<"\nPostorder : ";	
	postorder(&n1);
	return 0;
}