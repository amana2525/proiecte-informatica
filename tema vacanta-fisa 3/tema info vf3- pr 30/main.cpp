#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,i,p=1;
    cin>>x;
    cout<<sqrt(x)<<endl;
    for(i=1;i<=x;++i)
    { p=p*x;
    }
    cout<<p<<endl;
    if(x<0)
    {cout<<-x;}
    else
    {
    cout<<x;
    }
    return 0;
}
