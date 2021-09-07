#include<iostream>
using namespace std;
int main()
{
    int n,i,m=0,k=1;
    cin>>n;
    long ar[n];
    for(i=0;i<n;i++)    //2 2 9
    {
        cin>>ar[i];
    }
    for(i=1;i<n;i++)
    {
        if(ar[i]>=ar[i-1])
        k++;
    else
    {
        m=max(m,k);
        k=1;
    }
}
    m=max(m,k);
    cout<<m;
}