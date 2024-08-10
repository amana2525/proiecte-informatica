#include <iostream>

using namespace std;

int main()
{
    int n,c1,c2,c3;
    cin>>n;
    c1=n%10;
    c2=(n%100-c1)/10;
    c3=(((n%1000-c1)/10)-c2)/10;
    if(c1>=c2&&c1>=c3)
        cout<<c1;
    if(c2>=c1&&c2>=c3)
        cout<<c2;
    if(c3>=c1&&c3>=c2)
        cout<<c3;
    return 0;
}
