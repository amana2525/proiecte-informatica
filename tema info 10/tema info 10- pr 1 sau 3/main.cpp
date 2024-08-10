#include <iostream>

using namespace std;

int main()
{
    int n,d=2,p,max=0,maxval;
    cin>>n;
    d=2;
    while(n>1)
    {if(n%d==0)
    {p=0;
     while(n%d==0)
     {++p;
      n/=d;}
     if(p>=max)
     {max=p;
      maxval=d;
     }++d;}
     else
        ++d;
    }
    cout<<maxval<<" la puterea "<<max;
    return 0;
}
