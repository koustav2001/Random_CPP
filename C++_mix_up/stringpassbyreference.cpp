#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string reverse(string & );
void pass_ref(char *);
int main()
{
	string s;
	cin>>s;
	char a[10];
	gets(a);
	//string ans=reverse(s);
	//cout<<ans<<endl;
	pass_ref(a);
	cout<<a;
}

string reverse(string &s)
{
	int i,n=s.size()-1;
	string v;

	for(i=n;i>=0;i--)
	v.push_back(s[i]);
	
	//for(i=0;i<v.size();i++)
	//cout<<v[i];
	
	return v;
}
void pass_ref(char *a)
{
	*a='p';
}
