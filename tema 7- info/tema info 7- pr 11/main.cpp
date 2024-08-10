#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,min=n,d,k=0;
    cin>>n;
     for(d=2;d<=sqrt(n);d++)
     {if(n%d==0)
     { if(d<min)
       min=d;
      if(n/d!=d)
      {if(n/d<min)
       min=n/d;
      }
      }
      }
    cout<<min;
    return 0;
}
