#include <iostream>

using namespace std;

int main()
{
    int n,k,nr=1,nr1,nr2=1,n1;
    cin>>n>>k;
    while(k)
    {nr=nr*10;
    --k;
    }
    nr1=n%nr;
    n=n/nr;
    n1=n;
    while(n1)
    {nr2=nr2*10;
     n1/=10;
    }
    cout<<nr1*nr2+n;
    return 0;
}
