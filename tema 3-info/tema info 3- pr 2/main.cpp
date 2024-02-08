#include <iostream>

using namespace std;

int main()
{
    int n,s=0,c;
    cin>>n;
    while(n)
    {c=n%10;
     n=n/10;
     if(c%2==0)
     s=s+c;
    }
    cout<<s;
    return 0;
}
