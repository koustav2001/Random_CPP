#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(10);
    //cout<<s.size()<<endl;

    set<int>::iterator it;
    /*for (it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    */
    s.erase(2);
    //s.clear();
    //cout<<s.size()<<endl;
    for (it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    if(s.find(10)!=s.end())
    {
        //cout<<*s.find<<endl;
        cout<<"FOUND"<<endl;
    }
    else
    {
        cout<<"NOT FOUND"<<endl;
    }
    cout<<*s.lower_bound(2)<<endl;
    cout<<*s.upper_bound(5)<<endl;
}