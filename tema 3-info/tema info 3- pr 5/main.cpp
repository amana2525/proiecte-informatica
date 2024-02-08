#include <iostream>

using namespace std;

int main()
{
    int n,k,p=1,c;
    cin>>n;
    cin>>k;
    while(n)
    {c=n%10;
     n=n/10;
     if(c!=k)
     p=p*c;
    }
    cout<<p;
    return 0;
}
