#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,max=0,p,k=0,d,a;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>a;
     p=1000;
     for(d=2;d<=sqrt(a);d++)
     { if(a%d==0)
       p=0;
     }
     if(p==1000 && a>max)
     {max=a;
      k=1;
     }
     else if(a==max)
     k++;
    }
    cout<<max<<" "<<k;
    return 0;
}
