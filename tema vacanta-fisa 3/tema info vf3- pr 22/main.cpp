#include <iostream>

using namespace std;

int main()
{
    int a,a1=0;
    cin>>a;
    while(a)
    {
        a1=a1*10+a%10;
        a/=10;
    }
    while(a1)
    {cout<<a1%10<<"*";
     a1/=10;
    }
    return 0;
}
