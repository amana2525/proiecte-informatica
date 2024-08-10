#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,max=0,d,k=0;
    cin>>n;
     for(d=2;d<=sqrt(n);d++)
     {if(n%d==0)
     { if(d>max)
       max=d;
      if(n/d!=d)
      {if(n/d>max)
       max=n/d;
      }
      }
      }
    cout<<max;
    return 0;
}
