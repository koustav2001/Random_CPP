#include<iostream>
using namespace std;
void sieveprime(int n)
{
   int prime[n];
   for(i=0;i<n;i++)
   prime[i]=0;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            prime[j]=1;
        }
    }
    int c=0;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            c++;
        }
    }
  cout<<c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int x,y;
    cin>>x>>y;
    int k=sieveprime(x);
    }
}
    /*cout<<k;
    if(k<=y)
    cout<<"Chef"<<endl;
    else
     cout<<"Divyam"<<endl;/*
    }
}