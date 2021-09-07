#include<iostream>
#include<set>
using namespace std;
int main()
{
    int i,n;
    set<int>s;
    int ar[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        s.insert(ar[i]);
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
}