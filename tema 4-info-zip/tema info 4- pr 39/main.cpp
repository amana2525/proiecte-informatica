#include <iostream>

using namespace std;

int main()
{
    int n,k,c,i=0;
    cin>>n>>k;
    while(n)
    {c=n%10;
     n=n/10;
     i++;
     if(k==i)
    cout<<c;
    }
    return 0;
}
