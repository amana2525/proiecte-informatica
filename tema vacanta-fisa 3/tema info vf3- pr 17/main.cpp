#include <iostream>

using namespace std;

int main()
{
    int n,n1;
    cin>>n;
    n1=n%100;
    n1=(n1%10)*10+n1/10;
    cout<<n1*10+n/100;
    return 0;
}
