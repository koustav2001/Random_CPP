#include<iostream>
using namespace std;
void replace(string s)
{
    if(s.length()==0)
    return;
    else
    {
        if(s[0]=='p' && s[1]=='i')
        {
            cout<<"3.14";
            string res=s.substr(2);
            replace(res);
        }
        else
        {
            cout<<s[0];
            string res=s.substr(1);
            replace(res);
            
        }
    }
}
int main()
{
    replace("pipppppippppi");
}