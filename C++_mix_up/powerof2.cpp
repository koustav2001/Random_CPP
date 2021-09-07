#include<iostream>
using namespace std;
bool powerof2(int n)
{
    return(n&&!(n&(n-1)));//n=0 is corner case that's why use and AND operator
}
int main()
{
    cout<<powerof2(2)<<endl;
}