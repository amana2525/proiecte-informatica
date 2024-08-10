#include <iostream>

using namespace std;

int main()
{
    int n,nr=2,p=0;
    cin>>n;
    while(nr<n)
    {nr=nr*2;
     ++p;
    }
    cout<<p;
    return 0;
}
