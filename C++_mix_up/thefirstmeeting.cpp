#include<iostream>
using namespace std;
bool prime(int n)
{
    int i;
    if(n<=1)
    return false;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n,p=INT16_MIN,q=INT16_MAX,i;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
       cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(prime(ar[i]))
        {
            //cout<<ar[i]<<" ";
           p=max(ar[i],p);
           q=min(ar[i],q); 
        }
    }
    //cout<<p<<endl;
    //cout<<q<<endl;
    if(p-q<1)
    cout<<"-1";
    else if(p-q>INT16_MAX)
    cout<<"0";
    cout<<(p-q)<<endl;
}
