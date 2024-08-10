#include <iostream>

using namespace std;

int main()
{
    int n,k=0,s=0,p=1;
    cin>>n;
    while(n)
    {k++;
     s+=n%10;
     p*=n%10;
     n/=10;
    }
    cout<<s<<" "<<p<<" "<<k;
    return 0;
}
