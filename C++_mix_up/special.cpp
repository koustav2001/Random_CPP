#include<iostream>
using namespace std;
void solve()
{
	int n,i,d,res=0;
	scanf("%d",&n);
	for(i=1;i<=n;i=i*10+1)
	{
		for(d=1;d<=9;d++)
		{
			if(d*i<=n)
			res++;
		}	
	}
	printf("%d",res);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
}
