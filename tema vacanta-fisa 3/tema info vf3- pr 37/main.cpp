#include <iostream>

using namespace std;

int main()
{
    int c1,c2,c3;
    cin>>c1>>c2>>c3;
    cout<<c1*100+c2*10+c3<<" "<<c1*100+c3*10+c2<<" ";
    cout<<c2*100+c1*10+c3<<" "<<c2*100+c3*10+c1<<" ";
    cout<<c3*100+c1*10+c2<<" "<<c3*100+c2*10+c1<<" ";
    return 0;
}
