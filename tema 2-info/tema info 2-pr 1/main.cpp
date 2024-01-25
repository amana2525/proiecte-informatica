#include <iostream>

using namespace std;

int main()
{
    int n,i,a,max=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
    if(a>max)
            max=a;}
    cout<<max<<" e maximul";
    return 0;
}
