#include <iostream>

using namespace std;

int main()
{
    int n,c,max=0;
    cin>>n;
    while(n)
    {
        c=n%10; n=n/10;
        if(c>max)
            max=c;
    }
    cout<<max;
    return 0;
}
