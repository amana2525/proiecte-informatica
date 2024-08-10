#include <iostream>

using namespace std;

int main()
{
    int x,x1;
    cin>>x;
    while(x)
    { x1=x1*10+x%10;
      x/=10;
    }
    cout<<x1;
    return 0;
}
