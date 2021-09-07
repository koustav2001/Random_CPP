#include<iostream>
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
    int l,r;
    cin>>l>>r;
    seive();
	int c=0;
	for(int i=l;i<=r;i++)
	{
		int sum=0;
		if(prime[i]==0)
		{
			int temp=i;
			while(temp>0)
			{
				int d=temp%10;
				sum=sum+d;
				temp=temp/10;
			}
		}
		if(prime[sum]==0)
		c++;
	}
	cout<<c<<endl;
   // cout<<cumu[r]<<endl;
    //cout<<cumu[l]<<endl;
}