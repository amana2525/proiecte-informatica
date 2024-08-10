#include <iostream>

using namespace std;

int main()
{
    int x,y,s=0,s1=0,x1,y1;
    cin>>x>>y;
    x1=x;
    y1=y;
    while(x)
    {
        s=s+x%10;
        x/=10;
    }
    while(y)
    {
        s1=s1+y%10;
        y/=10;
    }
    if(s>s1)
        cout<<x1;
    else
        cout<<y1;
    return 0;
}
