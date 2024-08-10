#include <iostream>

using namespace std;

int main()
{
    int n,d=2,p;
    cin>>n;
    while(n>1)
    {if(n%d==0)
     { p=0;
       while(n%d==0)
       {p++;
        n/=d;
       }
       cout<<d<<" la puterea "<<p<<endl;
       ++d;
     }
     else
        ++d;
    }
    return 0;
}
