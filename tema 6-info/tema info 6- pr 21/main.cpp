#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,max=0,p,d,a,min=9999;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>a;
     p=1;
     for(d=2;d<=sqrt(a);d++)
     { if(a%d==0)
       p=0;
     }
     if(p==1 && a>max)
     max=a;
     if(p==1 && a<min)
     min=a;
    }
    int x=max+min;
    cout<<x;
    return 0;
}
