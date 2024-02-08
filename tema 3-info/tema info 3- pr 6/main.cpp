#include <iostream>

using namespace std;

int main()
{

    int n, k=0,c;
    cin>>n;
    while(n)
    {c=n%10;
    n=n/10;
    k++;
    }
    cout<<k;
    return 0;
}
