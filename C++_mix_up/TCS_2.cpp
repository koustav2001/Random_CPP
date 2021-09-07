#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int  prime[1000000]={0};
void seive()
{
	prime[0]=prime[1]=1;
	for(long long int i=2;i*i<=1000000;i++) // sqrt(1000000)=1000
	 {
		if(prime[i]==0)
		{
		 for(long long int j=i*i;j<=1000000;j=j+i)
		  {
             prime[j]=1;
		  }
		}
	}
}

int main()
{
    int n,i;
    cout<<"Enter the number";
    cin>>n;
    vector<int>a;
    //vector<int>::iterator it=a.begin();
    seive();
    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        a.push_back(i);
    }
    for(i=0;i<a.size();i++)
    cout<<a[i]<<endl;
}