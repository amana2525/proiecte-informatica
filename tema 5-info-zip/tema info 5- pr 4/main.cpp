#include <iostream>
#include<cmath>
using namespace std;

int main()
{   int i,n,nrdiv=0;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {if(n%i==0&&i%2==0)
     nrdiv++;
     if(i!=n/i&&(n/i)%2==0)
     nrdiv++;

    }
    cout<<nrdiv;
    return 0;
}
