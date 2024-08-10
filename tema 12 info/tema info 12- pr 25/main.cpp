#include <iostream>

using namespace std;

int main()
{
    int n,i,a,b,a1,b1,max,c,k;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>a>>b;
     a1=a;
     max=0;
     k=0;
     while(a1)
     {c=a1%10;
      a1/=10;
      if(c>max)
      max=c;}
      b1=b;
      while(b1)
      {c=b1%10;
       b1/=10;
       if(c==max)
       k++;
      }
      if(k==2)
      cout<<"("<<a<<","<<b<<")";
     }

    return 0;
}
