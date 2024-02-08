#include <iostream>

using namespace std;

int main()
{
    int n, nr, max=0;
    cin>>n;
    while(n)
    {
        nr=n%1000; n=n/10;
        if(nr>max)
            max=nr;

    }
    cout<<max;
    return 0;
}
