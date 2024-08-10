#include <iostream>

using namespace std;

int main()
{
    int i,i1,i2;
    for(i=10000;i<=99999;++i)
    { i1=i;
      i2=0;
      while(i1)
      {i2=i2*10+i1%10;
       i1/=10;
      }
      if(i==i2 && i%2==0)
      cout<<i<<" ";
    }
    return 0;
}
