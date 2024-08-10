#include <iostream>

using namespace std;

int main()
{
    int a,b,n,p1,p2,d=2,p=0;
    cin>>a>>b;

      n=a;
      d=2;
      p=0;
      while(n>1)
      {   if(n%d==0)
          {while(n%d==0)
           {++p;
            n/=d;}
            ++d;}
           else
            ++d;
      }
      p1=p;

      n=b;
      d=2;
      p=0;
      while(n>1)
      {   if(n%d==0)
          {while(n%d==0)
           {++p;
            n/=d;}
            ++d;}
            else
            ++d;
      }
    p2=p;

    if(p1>p2)
    cout<<a;
    else
    cout<<b;
    return 0;
}
