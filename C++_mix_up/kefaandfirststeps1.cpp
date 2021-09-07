#include<iostream>
using namespace std;
int main()
{
    int left=0,right=1,m=0;
    int n,i;
    cin>>n;
    long ar[n];
    for(i=0;i<n;i++)    //2 2 1 3 4 1
    {
        cin>>ar[i];
    }
    while(left<=n && right<=n)
    {
        if(ar[left]<=ar[right])
        right++;
        else
        {
            m=max(m,right-left-1);
            left=right;
            right++;
        }
    }
   // m=max(m,right-left-1);
    cout<<m;
}