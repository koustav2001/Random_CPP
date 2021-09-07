#include<iostream>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	int i,pos;
	for(i=0;i<s.size();i++)
	{
		if(s[i]!=t[i])
		{
			pos=i;
			break;	
		}
	}
	s[pos]=t[pos];
	cout<<s;
}
