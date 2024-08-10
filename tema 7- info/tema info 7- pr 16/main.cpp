#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int i,d,k=0,max=0,n;
    cin>>n;
    for(i=1;i<=n;i++)

    { k=0;
      for(d=2;d<=sqrt(i);d++)

     {if(i%d==0)

      {k++;
      if(d!=i/d)
      k++;}

     }
     if(k==0 && i>=max)
     max=i;
    }

    cout<<max;
    return 0;
}
