#include <iostream>

using namespace std;

int main()
{
    int x,y,nr=0,nr1=0;
    cin>>x>>y;
    while(y)
    {nr=nr*10+y%10;
     y/=10;
    }
    while(x)
    {nr=nr*10+x%10;
     x/=10;
    }
    while(nr)
    {nr1=nr1*10+nr%10;
     nr/=10;
    }
    cout<<nr1;
    return 0;
}
