#include <iostream>

using namespace std;

int main()
{
  int n,n1,d,i1=0,i=2,p;
  cin>>n;
  while(n)
  { p=1;
  n1=i;
  if(i==2)
  {cout<<i<<" ";
  --n;
  ++i;}
  if(i==3)
  {cout<<i<<" ";
  --n;
  ++i;}
    for(d=2;d*d<=i;++d)
    {if(i%d==0)
     p=0;
    }
    if(p)
    { while(n1)
      {i1=i1*10+n1%10;
       n1/=10;
      }
      for(d=2;d*d<=i1;++d)
    {if(i1%d==0)
     p=0;
    }
    }
    if(p)
    {cout<<i<<" ";
     --n;
     i++;
    }
    else
   i++;
  }
return 0;

}
