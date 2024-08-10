#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,s=0,p=0,k=0,a,d,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
    k=0;
     for(d=2;d<=sqrt(a);d++)
     {if(a%d==0)
      k++;
     }
     if(k==0)
     {s=s+a;
     p++;}
    }
    cout<<s/p;
    return 0;
}
