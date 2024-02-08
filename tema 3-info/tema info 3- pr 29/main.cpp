#include <iostream>

using namespace std;

int main()
{
    int n,n1,n2,n3,max=0,min=99999,c, c1;
    cin>>n;
    n1=n;
    while(n)
    {
       c=n%10;
       n=n/10;
       if(c>max)
        max=c;
       if(c<min)
        min=c;
    }
    while(n1)
    { c1=n1%10;
      if(c1=min)
     c1=max;
      else if(c1=max)
     c1=min;
     n2=n2*10+c1;
     n1=n1/10;
    }
    while(n2)
    { n3=n3*10+n2%10;
    n2=n2/10;

    }
    cout<<n3;
    return 0;
}
