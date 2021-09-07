#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(10);

    //cout<<s.size()<<endl;
    unordered_set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    s.erase(2);
     for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    //s.clear();
    cout<<s.size()<<endl;
    if(s.find(2)!=s.end())
    cout<<"Found"<<endl;
    else
    {
        cout<<"Not Found"<<endl;
    }
}