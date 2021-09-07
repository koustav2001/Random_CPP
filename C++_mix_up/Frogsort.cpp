#include<iostream>
#include<bits/stdc++.h>
#define ll long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll i;
        cin>>n;
        ll w[n+1];
        ll l[n+1];
        for(i=0;i<n;i++)
        cin>>w[i];
        for(i=0;i<n;i++)
        cin>>l[i];
        if(n==2)
        {
           if(w[0]<=w[1])
           cout<<"0\n";
           else
           {
               if(l[0]==1)
               cout<<"2\n";
               else
               cout<<"1\n";
           }
        }
        else if(n==3)
        {
            ll a,b,c,ap,bp,cp;
            ll ans;
            for(i=0;i<n;i++)
            {
                if(w[i]==1)
                {
                a=i;
                ap=i;
                }
                else if(w[i]==2)
                {
                b=i;
                bp=i;
                }
                else
                {
                c=i;
                cp=i;
                }
            }
                ans=0;
                while(b<=a || c<=b|| c<=a)
                {
                    while(b<=a)
                    {
                        b+=l[bp];
                        ans++;
                    }
                    while(c<=b || c<=a)
                    {
                        c+=l[cp];
                        ans++;
                    }
                }
                cout<<ans<<endl;
            }
            //cout<<ans<<"\n";
        else if(n==4)
        {
            ll a,b,c,d,ap,bp,cp,dp;
            ll ans=0;
            for(i=0;i<n;i++)
            {
                if(w[i]==1)
                {
                a=i;
                ap=i;
                }
                else if(w[i]==2)
                {
                b=i;
                bp=i;
                }
                else if(w[i]==3)
                {
                c=i;
                cp=i;
                }
                else
                {
                    d=i;
                    dp=i;
                }
            }
                while(b<=a || c<=b|| c<=a || d<=a || d<=b || d<=c)
                {
                    while(b<=a)
                    {
                        b+=l[bp];
                        ans++;
                    }
                    while(c<=b || c<=a)
                    {
                        c+=l[cp];
                        ans++;
                    }
                    while(d<=a || d<=b || d<=c)
                    {
                        d+=l[dp];
                        ans++;
                    }
                }
                cout<<ans<<"\n"; 
            }
           
        }
    }
