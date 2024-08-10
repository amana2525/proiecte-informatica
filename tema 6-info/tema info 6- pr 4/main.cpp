#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,s=0,a,i,k=0,p,d;
    cin>>n>>p;
    for(i=1;i<=n;i++)
    { cin>>a;
      k=0;
      for(d=1;d<=sqrt(a);d++)
      {if(a%d==0)
      {k++;
      if(d!=sqrt(a))
      k++;}}
      if(k>=p)
      s=s+a;
      }
    cout<<s;
    return 0;}
