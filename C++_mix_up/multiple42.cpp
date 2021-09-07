#include <iostream>
 
using namespace std;
 
typedef long long ll;
 
int main() {
 ll n;
 while(1)
 {
	 cin>>n;
	 if(n%42==0)
	 {
	 cout<<"The answer to Life, the Universe and Everything is "<<n;
	 break;
	 }
	 else cout<<n<<endl;;
 }
}
