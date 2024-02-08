#include <iostream>

using namespace std;

int main()
{
    int n,c,k=0,c1,n1;
    cin>>n;
    n1=n;
    while(n)
    {c=n1%10;
     c1=n%10;
     n=n/10;
    if(c==c1)
    {k++;}
    }
    cout<<k;
    return 0;
}
