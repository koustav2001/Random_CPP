#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i;
	int c=0;
	vector<int>a;
	printf("Enter the number and kth factor: ");
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		a.push_back(i);
		c++;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	if(a.size()>k)
	cout<<a[k]<<endl;
	else
	cout<<"1";
}
