#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d1,d2,d3;
    cin>>a>>b>>c;
    if(a>=b)
    d1=a-b;
    else
        d1=b-a;
    if(b>=c)
        d2=b-c;
    else
        d2=c-b;
    if(c>=a)
        d3=c-a;
    else
        d3=a-c;
    if(d1>=d2&&d1>=d3)
        cout<<d1;
    if(d2>=d1&&d2>=d3)
        cout<<d2;
    if(d3>=d1&&d3>=d2)
        cout<<d3;
    return 0;
}
