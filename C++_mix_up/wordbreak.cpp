#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string r="";
int wordbreak(string s,vector<string> &s1)
{
	int i;
	if(std::find(s1.begin(),s1.end(),s)!=s1.end())
	return 1;
	else
	{
		for(i=1;i<=s.size();i++)
		{
			int len=i;
			r+=s.substr(0,len);
			if(std::find(s1.begin(),s1.end(),r)!=s1.end())
			{	
				wordbreak(s.substr(i),s1);
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int n,i;
	cin>>n;
	vector<string>dict;
	for(i=0;i<n;i++)
	{
	string s;
	cin>>s;
	dict.push_back(s);
	}
	string line;
	cin>>line;
	cout<<wordbreak(line,dict)<<"\n";
	//if(std::find(dict.begin(), dict.end(), s1) != dict.end())
	//cout<<"True";
	//else
	//cout<<"False";	
}
