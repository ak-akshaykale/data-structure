#include<iostream>
using namespace std;
struct Node
{
	int rollno;
	char name[20];
	char addr[30];
};
int main()
{
	struct Node n[5];
	for(int i=0;i<5;i++)
	{
	cout<<"\nEnter Rollno: ";
	cin>>n[i].rollno;
	cout<<"\nEnter Name: ";
	cin>>n[i].name;
	cout<<"\nEnter Addr: ";
	cin>>n[i].addr;
	}
	for(int i=4;i>=0;i--)
	{
	cout<<"\nRollno: "<<n[i].rollno;
	cout<<"\nName: "<<n[i].name;
	cout<<"\nAddr: "<<n[i].addr; 
	}
	return 0;
}