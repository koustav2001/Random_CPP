#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
    long long int num;
    cin>>num;
    long long int c,i=0;
    int f=1;
    while(1)
    {
        if(pow(2,i)==num)
        {
            f=1;
            break;
        }
        else if(pow(2,i)>num)
        {
        f=0;
        break;
        }
        i++;
    }
    if(f==1)
    cout<<"YES";
    else
    cout<<"NO";
}