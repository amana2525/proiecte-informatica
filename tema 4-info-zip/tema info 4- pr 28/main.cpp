#include <iostream>

using namespace std;

int main()
{
    int n,c1,c,nr;
    cin>>n;
    c1=n%10;
    while(n>9)
    {
        n=n/10;
        c=n;
    }
    nr=c*10+c1;
    cout<<nr;
    return 0;
}
