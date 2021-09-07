#include<iostream>
using namespace std;
long long int  prime[1000000]={0};
void seive()
{
	prime[0]=prime[1]=1;
	for(long long int i=2;i*i<=1000000;i++) // sqrt(1000000)=1000
	 {
		if(prime[i]==0)
		{
		 for(long long int j=i*i;j<=1000000;j=j+i)
		  {
             prime[j]=1;
		  }
		}
	}
}
/*int maximum(int temp[],int k)
   {
   	int i;
   	int m=temp[0];
   	for(i=1;i<k;i++)
   	{
   		if(temp[i]>m)
		   m=temp[i];	
	}
	return m;
   }*/
   /*int minimum(int temp[],int k)
   {
   	int i;
   	int m1=temp[0];
   	for(i=1;i<k;i++)
   	{
   		if(temp[i]<m1)
		   m1=temp[i];	
	}
	return m1;
}
*/
int main()
{
   int l,r,i,m1,m,t,flag;
   int temp[1000],k=0; 
   seive();
   scanf("%d",&t);
   while(t--)
   {
   	flag=0;
   	cin>>l>>r;
   	m=-1;
   	m1=-1;
   for(i=l;i<=r;i++)
   {
       if(prime[i]==0)
       {
           m=i;
           break;
       }
       //cout<<i<<" ";
   }
   for(i=r;i>=l;i--)
   {
       if(prime[i]==0)
       {
           m1=i;
           break;
       }
       //cout<<i<<" ";
   }
   //printf("%d %d\n",m,m1);
   if(m!=m1)
   printf("%d\n",m1-m);
   else if(m==m1 &&(m!=-1 && m!=-1))
   printf("0\n");
   else
   printf("-1\n");
   /*if(sizeof(temp)>1)
   printf("%d\n",temp[1]-temp[0]);
   else if(sizeof(temp)==1)
   printf("0\n");
   else
   printf("-1\n");*/
}
}
   

