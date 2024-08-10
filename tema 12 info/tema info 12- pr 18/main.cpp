#include <iostream>

using namespace std;

int main()
{
    int n,i,i1,d,k;
    cin>>n;
    i=1;
    while(n)
    { i1=i;
      d=2;
      k=0;
    while(i1>1)
    {if(i1%d==0)
     {while(i1%d==0)
      {i1/=d;}
      ++k;
     }
     ++d;
    }
    if(k==3)
    {cout<<i<<" ";
    --n;
    }
    ++i;
    }
    return 0;
}
