#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=1,s=1,d,k=0,a;
    cin>>a;
    n=1;
    while(n<=a)
     {s=1;
     for(d=2;d<=sqrt(n);d++)
     {if(n%d==0)
     {s=s+d;
      if(n/d!=d)
      s=s+n/d;}}
    if(s==n)
    cout<<n<<" ";
    n++;}
    return 0;
}
