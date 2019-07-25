#include<iostream>
using namespace std;
int main()
{
  int N,K,i,sum=0;
  cin>>N>>K;
  int a[N];
  for(i=0;i<K;i++)
  {
    cin>>a[i];
    sum=sum+a[i];
   }
   cout<<sum;
  return 0;
  }
