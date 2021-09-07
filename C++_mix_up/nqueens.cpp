#include<iostream>
#include<cstdlib>
#define MAX 100
using namespace std;
int b[MAX];
void arrange(int ,int );
int place(int,int);
void show(int);
int main()
{
	int n;
	cout<<"Enter the no of queens ";
	cin>>n;
	arrange(1,n);
}
void arrange(int r,int n)
{
	for(int c=1;c<=n;c++)
	{
		if(place(r,c)==1)
		{
			b[r]=c;
			if(r==n)
			show(n);
			else
			arrange(r+1,n);
		}
	}
}

int place(int r,int c)
{
	for(int i=1;i<=r-1;i++)
	{
		if(b[i]==c)
		return 0;
		if(abs(b[i]-c)==abs(i-r))
		return 0;
	}
	return 1;
}
void show(int n)
{
	static int count=0;
	cout<<"No.of solutions"<<endl;
	cout<<++count<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(b[i]==j)
			cout<<"Q\t";
			else
			cout<<"-\t";
		}
		cout<<"\n\n";
	}
}
