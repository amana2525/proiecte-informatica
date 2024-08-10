#include <iostream>

using namespace std;

int main()
{
    int n,c,c1,c2;
    cin>>n;
    c=n%100;
    c1=n/1000;
    c2=n/100%10;
    cout<<(c*10+c2)*100+c1;
    return 0;
}
