#include <iostream>

using namespace std;

int main()
{
    int x,x1,x2;
    cin>>x;
    x2=x;
    while(x)
    {x1=x1*10+x%10;
     x/=10;
    }
    if(x1==x2)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
