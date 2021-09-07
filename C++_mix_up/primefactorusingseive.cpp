#include<iostream>
using namespace std;
void primefactor(int n)
{
    int prime[n+1]={0};
    int i,j;
    for(i=2;i<=n;i++)
    {
        prime[i]=i;
    }
    for(i=2;i<=n;i++)
    {
        if(prime[i]==i)
        {
            for(j=i*i;j<=n;j+=i)
            {
                if(prime[j]==j)
                prime[j]=i;
            }
        }
    }
    while(n!=1)
    {
        cout<<prime[n]<<" ";
        n=n/prime[n];
    }   
}
int main()
{
    int n;
    cin>>n;
    primefactor(n);
    return 0;
}