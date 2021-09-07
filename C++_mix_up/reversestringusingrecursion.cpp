#include<iostream>
#include<string>
using namespace std;
void reverse(string s)
{
    if(s.length()==0)
    return;
    else
    {
        string res=s.substr(1);
        reverse(res);
        cout<<s[0];
    }
}
int main()
{
    reverse("koustav");
}