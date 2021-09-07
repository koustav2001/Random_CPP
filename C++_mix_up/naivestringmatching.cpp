#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j;
	string txt,pat;
	getline(cin,txt);
	getline(cin,pat);
	int n=txt.size();
	int m=pat.size();
	for(i=0;i<=n-m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(txt[i+j]!=pat[j])
			break;
		}
		if(j==m)
		{
			cout<<"Pattern matched at index"<<" "<<i<<endl;
		}
	}
}
