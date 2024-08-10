#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,s=0,max=0,p,d,a,k=0,min=9999;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>a;
     p=1;
     for(d=2;d<=sqrt(a);d++)
     { if(a%d==0)
       p=0;
     }
     if(p==1)
     { s=s+a;
       k++;
     }
    }
    float ma=s/k;
    cout<<ma;
    return 0;
}
