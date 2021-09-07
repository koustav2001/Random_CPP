#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
    int get=1<<pos;
    return(n&get!=0);
}
int setbit(int n,int pos)
{
    int set=1<<pos;
    return(n|set);
}
int clearbit(int n,int pos)
{
    int clear=~(1<<pos);
    return(n&clear);

}
int updatebit(int n,int pos,int value)
{
    int update=~(1<<pos);
    n=n&update;
    return(n|(value<<pos));
}
int main()
{
    //cout<<getbit(5,2)<<endl;
   //cout<<setbit(5,1)<<endl;
   //cout<<clearbit(5,2)<<endl;
   cout<<updatebit(5,1,1)<<endl;
}