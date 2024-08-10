#include <iostream>

using namespace std;

int main()
{
    int n,s=0,c;
    cin>>n;
    while(n)
    {c=n%10;
     s+=c*c*c;
     n/=10;
    }
    cout<<s;
    return 0;
}
