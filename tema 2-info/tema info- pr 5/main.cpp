#include <iostream>

using namespace std;

int main()
{
    int n,max=0;
    cin>>n;
    while(n)
    {if(n>max)
        max=n;
    cin>>n;}
    cout<<max;
    return 0;
}
