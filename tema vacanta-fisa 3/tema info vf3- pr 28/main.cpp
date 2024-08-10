#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    a=a/100;
    b/=10;
    c=c%10;
    cout<<a*100+b*10+c;
    return 0;
}
