#include<iostream>
using namespace std;
void subsets(int arr[],int n)
{
    int i;
    for(i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<ar[j]<<" ";
            }
        }
        cout<<endl;
    }
}