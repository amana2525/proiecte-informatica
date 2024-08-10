#include <iostream>

using namespace std;

int main()
{
    int n,a,max=0,maxnr,n1;
    cin>>n;
    while(n>=10)
    {cin>>n;
     n1=n;
     a=0;
     while(n1)
     {a=a*10+n1%10;
      n1/=10;}
      if(a>max)
      {max=a;
       maxnr=n;
    }
    }
    cout<<maxnr;
    return 0;
}
