#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    while(x!=y)
    {if(x>y)
     x-=y;
     else
     y-=x;
    }
    while(x!=z)
    {if(x>z)
     x-=z;
     else
     z-=x;
    }
    cout<<x;
    return 0;
}
