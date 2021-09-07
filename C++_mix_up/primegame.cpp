#include<iostream>
using namespace std;
long sieveprime(long n)
{
    long prime[n]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            prime[j]=1;
        }
    }
    long c=0;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            c++;
        }
    }
   return c;
}
int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
    long long x,y;
    scanf("%lld %lld",&x,&y);
    long k=sieveprime(x);
    cout<<k;
    if(k<=y)
    cout<<"Chef"<<endl;
    else
    {
        cout<<"Divyam"<<endl;
    }
    }
}