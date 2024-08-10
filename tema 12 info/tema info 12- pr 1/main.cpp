#include <iostream>

using namespace std;

int main()
{
    int n,i,d,s=0,p=1,i1;
    cin>>n;
    i=11;
    while(n)
    {i1=i;
    s=0;
    p=1;
     while(i1)
     {s=s+i1%10;
      i1/=10;
     }
     for(d=2;d<=s/2;++d)
     if(s%d==0)
     p=0;
     if(p==1)
     {cout<<i<<" ";
     --n;}
     ++i;
    }
    return 0;
}
