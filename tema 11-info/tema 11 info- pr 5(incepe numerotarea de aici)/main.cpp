#include <iostream>

using namespace std;

int main()
{
    int n,a,max=-1000000,i;
    cin>>n;
    for(i=1;i<=n;++i)
    { cin>>a;
      if(a<0 && a>max)
      max=a;
    }
    cout<<max;
    return 0;
}
