#include <iostream>

using namespace std;

int main()
{
    int n,c,n1,n2=0;
    cin>>n;
    n1=n;
    while(n)
    {
      c=n%10; n=n/10;
      n2=n2*10+c;
    }
    cout<<n2;
    return 0;
}
