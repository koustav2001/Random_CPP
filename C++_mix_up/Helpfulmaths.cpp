#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    char a[100];
    cin>>s;
    int i,j=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='+')
        {
            a[j++]=(int)s[i];
        }
    }
    sort(a,a+j);
    for(i=0;i<j;i++)
    {
      
		if (i == j - 1) cout << a[i] << endl;
		else cout << a[i] << "+";
    }
}