#include<iostream>
using namespace std;
int main()
{
    int i,n,c;
    cin>>n;
    cin>>c;
    string s="";
    string s1=to_string(n);
    //cout<<s1<<endl;
    for(i=0;i<s1.size();i++)
    {
        if(int(s[i]-'0')+c<10)
        {
        s+=to_string(int(s1[i]-'0')+c);
        }
        else if(int(s[i]-'0')+c>=10)
        {
            int res=int(s[i]-'0')+c-9+64;
            s+=(char)res;
        }
    }
    cout<<s<<endl;
}