#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<' ';
    int t=0;
    while(a!=0 && b!=0)
    {
        if(a>b)
        {
            int x = a/b;
            a-=(x*b);
            t+= x;
        }
        else
        {
            int x=b/a;
            b-=(x*a);
            t+= x;
        }
    }
    cout<<t;
    return 0;
}
