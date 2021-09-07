#include<iostream>
using namespace std;


void swap1(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	cout<<a<<" "<<b<<endl;
}

void swap2(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	cout<<*a<<" "<<*b<<endl;
}

int main()
{
	int a,b;
	cin>>a>>b;
	//swap1(a,b);
	swap2(&a,&b);
	
	cout<<a<<" "<<b;
}
