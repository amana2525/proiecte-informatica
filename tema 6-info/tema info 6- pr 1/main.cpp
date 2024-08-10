#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,d,k=0,maxnr=0,max=0;
    cin>>n;
    for(i=1;i<=n;i++)
    { k=0;
      for(d=1;d<=sqrt(i);d++)
      {if(i%d==0)
      {k++;
      if(d!=sqrt(i))
      k++;}
      }
      cout<<k<<endl;
      if(k>max)
      { max=k;
        maxnr=i;
      }
    }
    cout<<maxnr;
    return 0;
}
