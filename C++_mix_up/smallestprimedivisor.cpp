#include<iostream>
#include<bits/stdc++.h>
#define MAX 100001
using namespace std;

 int spf[100001];

void primefactor()
{
    int i,j;
    //long long int spf[MAX];
    for (i=2;i<=MAX;i++)
    {
        spf[i]=i;
    }
    for(i=2;i<=MAX;i++)
    {
        if(spf[i]==i)
        {
            for(j=i*i;j<=MAX;j++)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
}
vector<int> getFactorization(int x)
{
    //long long int spf[MAX];
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

int main()
{
    primefactor();
    int x;
    cin>>x;
    vector<int>res=getFactorization(x);
    for (int i=0; i<res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}