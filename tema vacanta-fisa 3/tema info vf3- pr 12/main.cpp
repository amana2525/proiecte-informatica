#include <iostream>

using namespace std;

int main()
{
    int a,b,c,a1;
    cin>>a>>b>>c;
    a1=a;
    a=b;
    b=c;
    c=a1;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
