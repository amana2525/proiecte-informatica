#include <iostream>

using namespace std;

int main()
{
    int n,c;
    cin>>n;
    while(n)
    {c=n%10;
     n/=10;
     if(c%2==0)
     cout<<c<<",";
    }
    return 0;
}
