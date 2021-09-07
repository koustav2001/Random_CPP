#include<iostream>
#include<bits/stdc++.h>
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
			s.insert(pos,1,t[i]);
		}
		else
		{
			s[i]=t[i];
		}
	}
	cout<<s;
}
