#include <iostream>

using namespace std;

int main()
{
    int x,c,x1=0;
    cin>>x;
    while(x)
    {
     c=x%10;
     x=x/10;
     x1=x1*10+c;
    }
    cout<<x1;
    return 0;
}
