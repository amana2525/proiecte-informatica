#include <iostream>

using namespace std;

int main()
{
    int n,c,c1;
    cin>>n;
    while(n)
    {
        c=n%10; n=n/10;
        if(c%2==0)
        {
          c1=c;
          n=0;
        }
    }
    cout<<c1;
    return 0;
}
