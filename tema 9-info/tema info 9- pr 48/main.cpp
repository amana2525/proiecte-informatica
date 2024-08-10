#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,i,d,k=0;
    cin>>a>>b;
    for(i=sqrt(a)+1;i*i<=b;++i)
   {cout<<i*i<<" ";
   }
    return 0;
}
