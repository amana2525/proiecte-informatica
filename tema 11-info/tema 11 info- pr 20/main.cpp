#include <iostream>

using namespace std;

int main()
{
    int n,n1,c,nr=0;
    cin>>n;
    while(n!=-1)
    { n1=n;
      while(n1)
      {c=n1%10;
       n1/=10;
       if(c==0)
       ++nr;
      }
      cin>>n;
    }
    cout<<nr;
    return 0;
}
