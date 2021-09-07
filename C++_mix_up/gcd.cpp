#include<iostream>
using namespace std;
int gcd(int ,int );
int main()
{
    int t,m;
    cin>>t;
    while(t--)
    {
    int n,g=1,i;
    m=0;
    cin>>n;
    if(n<=2)
    cout<<1<<endl;
    else
    {
    for(i=2;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
        g=gcd(i,j);
        //cout<<g;
        m=max(m,g);
        //cout<<g<<endl;
    }
    }
    cout<<m<<endl;;
    }
    }
    //cout<<gcd(a,b);
}
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}