#include <iostream>

using namespace std;

int main()
{
    int n, c, min=10, x;
    cin>>n>>x;
    while(n)
    {
       c=n%10; n=n/10;
       if(c<min && c>x)
            min=c;

    }
    cout<<min;
    return 0;
}
