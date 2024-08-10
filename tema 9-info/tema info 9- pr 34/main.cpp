#include <iostream>

using namespace std;

int main()
{
    int x1,x,y,z;
    cin>>x>>y>>z;
    x1=x;
    int p1=x*y, p2=x*z;
    while(x!=y)
    {if(x>y)
     x-=y;
     else
     y-=x;
    }
    p1=p1/x;
    while(x1!=z)
    {if(x1>z)
     x1-=z;
     else
     z-=x1;
    }
    p2=p2/x1;
    int p=p1*p2;
    while(p1!=p2)
    {if(p1>p2)
     p1-=p2;
     else
     p2-=p1;
    }
    p=p/p1;
    cout<<p;
    return 0;
}
