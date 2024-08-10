#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int i,d,k=0,min=99999,n;
    cin>>n;
    for(i=2;i<=n;i++)
    { if(n%i==0)
      {k=0;
      for(d=2;d<=sqrt(i);d++)
     {if(i%d==0)
      k++;
      if(d!=i/d)
      k++;
     }
     if(k==0 && i<=min)
     min=i;
    }}

    cout<<min;
    return 0;
}
