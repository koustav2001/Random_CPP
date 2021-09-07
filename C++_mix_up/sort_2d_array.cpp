#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    vector<int>v;
    vector<vector<int>>v1;
    cin>>n>>m;
    int a[n][m],res[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Before Sorting"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"After Sorting"<<endl;
    int k=0;
    for(i=0;i<n;i++)
    {
        for(k=0;k<m;k++)
        {
            v.push_back(a[i][k]);
        }
        sort(v.begin(),v.end());
        for(j=0;j<v.size();j++)
        {
           res[i][j]=v[j];
           //cout<<res[i][j]<<" ";
        }
        v.clear();
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
}