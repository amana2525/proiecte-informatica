#include <iostream>

using namespace std;

int main()
{
    int n,nr=1,n1=0,n2=0,k;
    cin>>n>>k;
    while(n)
    {
        n1=n1*10+n%10;
        n=n/10;
    }
    while(k)
    {
      nr=nr*10;
      k--;
    }
    n1=n1/nr;
    while(n1)
    {
        n2=n2*10+n1%10;
        n1=n1/10;
    }
    cout<<n2;
    return 0;
}
