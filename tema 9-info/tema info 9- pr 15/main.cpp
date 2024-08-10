#include <iostream>

using namespace std;

int main()
{
    int n,s=0,c;
    cin>>n;
    while(n>9)
    {   s=0;
        while(n>0)
        { c=n%10;
          s=s+c;
          n=n/10;
        }
        n=s;
    }
    cout<<n;
    return 0;
}
