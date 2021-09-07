#include<iostream>
using namespace std;
int main()
{
	
	int i;
	string res,a;
	cin>>res;
	int n=res.length();
	for(i=n-1;i>=0;i--)
	{
		a.push_back(res[i]);
	}
	cout<<a<<endl;
}
