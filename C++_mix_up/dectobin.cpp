#include<iostream>
using namespace std;
int main()
{
    int a,k=0,i;
    int ar[10];
    cin>>a;
    while (a>0)
    {
        ar[k]=a%2;
        a=a/2;
        k++;
    }
    for(i=k-1;i>=0;i--)
    {
        cout<<ar[i];
    }
}