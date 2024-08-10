#include <iostream>

using namespace std;

int main()
{
    int n,d,s;
    long long i=2;
    cin>>n;
    while(n)
    {s=1;
     for(d=2;d*d<=i;d++)
     {if(i%d==0)
      {s+=d;
       s+=i/d;
      }
      if(d*d==i)
      s-=d;
     }
     if(s==i)
     {cout<<i<<" ";
      --n;
     }
     ++i;
    }
    return 0;
}
