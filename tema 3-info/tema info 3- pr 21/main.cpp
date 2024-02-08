#include <iostream>

using namespace std;

int main()
{
    int a,b,a1=0,b1=0,c,c1;
    cin>>a>>b;
    while(a)
    {c=a%10;
    a=a/10;
    a1=a1*10+c;}
    while(b)
    {c1=b%10;
    b=b/10;
    b1=b1*10+c1;}
    if(a1>b1)
    cout<<a1;
    else
    cout<<b1;
    return 0;
}
