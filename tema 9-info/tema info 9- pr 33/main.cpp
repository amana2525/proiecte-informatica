#include <iostream>

using namespace std;

int main()
{
    int x,y,x1,y1;
    cin>>x>>y;
    x1=x;y1=y;
    while(x!=y)
    {if(x>y)
     x-=y;
     else
     y-=x;
    }
    cout<<x1*y1/x;
    return 0;
}
