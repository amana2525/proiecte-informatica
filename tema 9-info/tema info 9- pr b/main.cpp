#include <iostream>

using namespace std;

int main()
{
    int x,x1,y1,y;
    cin>>x>>y;
    x1=x; y1=y;
    if(x!=y)
    {while(x!=y)
    {if(x>y)
     x=x-y;
     else
     y=y-x;
    }}
    cout<<x<<endl;
    cout<<x1*y1/x;
    return 0;
}
