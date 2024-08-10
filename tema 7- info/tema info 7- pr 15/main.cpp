#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int i,d,k=0,min=999,n;

    for(i=100;i<=999;i++)

    { k=0;
      for(d=2;d<=sqrt(i);d++)

     {if(i%d==0)

      {k++;
      if(d!=n/d)
      k++;}

     }
     if(k==0 && i<=min)
     min=i;
    }

    cout<<min;
    return 0;
}
