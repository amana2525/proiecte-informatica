#include <iostream>

using namespace std;

int main()
{
    int n,c,s=0;
    cout<<"n=";cin>>n;
    while(n)
    {c=n%10;
     n=n/10;
     s=s+c;
    }
    cout<<s;
    return 0;
}
