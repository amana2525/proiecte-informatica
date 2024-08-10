#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x!=y)
    {while(x!=y)
    {if(x>y)
     x=x-y;
     else
     y=y-x;
    }
    }
    if(x!=z)
    while(x!=z)
    {if(x>z)
     x=x-z;
     else
     z=z-x;
    }
    cout<<x;
    return 0;
}
