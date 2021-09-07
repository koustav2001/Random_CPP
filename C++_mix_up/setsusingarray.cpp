#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],i,n;
    cin>>n;
    unordered_set<int>s;
    unordered_set<int>sampleSet;
   for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   /* s.insert(5); 
    s.insert(10); 
    s.insert(15); 
    s.insert(20); 
    s.insert(25); 
  
    auto itr1 = s.cbegin(); 
    auto itr2 = s.cbegin(4); 
  
    cout << "First element in the container is: " << *itr1; 
    cout << "\nFirst element in the bucket 4 is: " << *itr2; */
    unordered_set<int>::iterator it;
    for(it=s.cbegin();it!=s.cend();it++)
    cout<<*it<<endl;
    /*for(i=0;i<n;i++)
    {
       if(s.find(arr[i])==s.end())
       s.insert(arr[i]);
    }
    unordered_set<int>::iterator it;
    
    for(it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
    /*unordered_set<int>::iterator it1;
    for(it1=s1.begin();it1!=s1.end();it1++)
    cout<<*it1<<" ";*/
}