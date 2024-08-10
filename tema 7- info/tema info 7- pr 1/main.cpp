#include <iostream>

using namespace std;

int main()
{   int a,n,i1,c,s=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    { s=0;
      i1=i;
      a=i;
      while(a)
      {c=a%10;
       a=a/10;
       s=s+c*c*c;
      }
      if(s==i1)
      cout<<i1<<endl;
    }
    return 0;
}
