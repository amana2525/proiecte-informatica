#include <iostream>

using namespace std;

int main()
{
    int c,n,s=0,k=0;
    cin>>n;
    while(n)
    {c=n%10;
    n/=10;
    s=s+c;
    ++k;
    }
    cout<<s/k;
    return 0;
}
