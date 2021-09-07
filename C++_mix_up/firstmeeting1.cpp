#include <iostream>
 #include<bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 5;
bool prime[MAX];
 
void seive()
{
    int i, j;
    memset(prime, false, sizeof(prime));
    prime[0] = prime[1] = true;
    for(i = 2;i*i < MAX;++i)
        if(prime[i] == false)
            for(j = i*i;j < MAX;j += i)
                prime[j] = true;
}
int main()
{
    int i,n,a,mi=1e6+5,mx=0;
    cin>>n;
    seive();
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(prime[a]==false)
        {
         
         mi=min(a,mi);
         mx=max(a,mx);
        }
    }
    //cout<<mi;
    if(mx)
    cout<<mx-mi<<endl;
    else
    cout<<"-1"<<endl;
}