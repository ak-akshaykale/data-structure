#include<iostream>
using namespace std;
void counter(int n)
{
	if(n==5)
	return;
	
	counter(n+1);
	cout<<"after count: "<<n;
}
int main()
{
	counter(1);
	return 0;
}