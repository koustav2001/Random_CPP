#include<iostream>
#define N 100
using namespace std;
int ar[1001];
void seive()
{
    for(int i=1;i<=N;i++)
    {
        ar[i]=-1;
    }
    for(int i=2;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
        {
            if(ar[j]==-1)
            ar[j]=i;
        }
    }
}
int main()
{
    seive();
    int t;
    cin>>t;
    while(t>1)
    {
        cout<<ar[t]<<" ";
        t=t/ar[t];
    }
}