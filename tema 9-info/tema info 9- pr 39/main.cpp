#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,d,k=0;
    cin>>n;
    for(d=2;d<=sqrt(n);d++)
    {if(n%d==0)
     {cout<<d<<" ";
     k++;
     if(n!=d)
     {cout<<n/d<<" ";
     k++;}}}
     if(k==0)
     cout<<"e prim";
    return 0;
}
